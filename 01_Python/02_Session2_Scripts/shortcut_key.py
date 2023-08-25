import keyboard



def shortcut_trigger():
    pass
    
    
def listen_for_shortcut():
    
    # Set the desired shortcut key combination (Example: Ctrl + Alt + S)
    shortcut = "alt + shift + s"

    # Register the callback function for the shortcut
    keyboard.add_hotkey(shortcut, shortcut_trigger)

    # Continuously listen for keyboard events
    keyboard.wait()
   

listen_for_shortcut()

