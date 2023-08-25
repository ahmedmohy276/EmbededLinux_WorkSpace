import pyperclip
import threading
import keyboard

lock = threading.Lock()

copydata = ''

def shortcut_trigger():
    global copydata
    f = open("notes.txt","+r")
    f.read()
    lock.acquire()
    f.write(copydata)
    f.close()   
    copydata = ''
    lock.release()
    
    
def check_and_create_txt_file():
    try:
        f = open("notes.txt")
    except FileNotFoundError:
        # doesn’t exist
        #create_txtfile
        f = open("notes.txt","w+")
        f.close()
        print("file notes.txt created successfully")
    else:
        # file already exists
        f.close()
        print("file notes.txt already exists")
    
def listen_for_shortcut():
    
    # Set the desired shortcut key combination (Example: Ctrl + Alt + S)
    shortcut = "alt + shift + s"

    # Register the callback function for the shortcut
    keyboard.add_hotkey(shortcut, shortcut_trigger)

    # Continuously listen for keyboard events
    keyboard.wait()


def waitforcopy():
    global copydata
    while True :
        pyperclip.waitForNewPaste()
        lock.acquire()
        copydata += (pyperclip.paste() + "\n")
        lock.release()

check_and_create_txt_file()


t1 = threading.Thread(target=listen_for_shortcut)
t2 = threading.Thread(target=waitforcopy)

t1.start()
t2.start()

t1.join()
t2.join()
