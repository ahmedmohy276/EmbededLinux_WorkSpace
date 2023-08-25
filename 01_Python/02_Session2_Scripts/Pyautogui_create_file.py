#!/usr/bin/python3
import pyautogui
#import keyboard
import time
import os


def create_txtfile():
    filepath = os.path.dirname(os.path.realpath(__file__)) + '/Terminal.png'
    directory = os.path.dirname(os.path.realpath(__file__))
    pyautogui.hotkey('win')
    time.sleep(1)
    pyautogui.write('terminal')
    isfind = None
    while isfind is None:
        isfind = pyautogui.locateOnScreen(filepath, confidence = 0.7)
    pyautogui.press('enter')
    time.sleep(1)
    pyautogui.write('cd ' + directory)
    time.sleep(1)
    pyautogui.press('enter')
    time.sleep(1)
    pyautogui.write('touch notes.txt')
    time.sleep(1)
    pyautogui.press('enter')
    print("file notes.txt created successfully")
    

def check_and_create_txt_file():
    var = 0
    try:
        f = open("notes.txt")
    except FileNotFoundError:
        # doesn’t exist
        create_txtfile()
    else:
        # exists
        print("file notes.txt already exists")
        var = 1
    
    if var == 1:
        f.close()