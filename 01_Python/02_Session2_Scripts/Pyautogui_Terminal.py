#!/usr/bin/python3
import pyautogui
#import keyboard
import time
import os

# Print mouse position using pyautogui

#while True:
#    x,y = pyautogui.position()
#    print(x , " , ",y)

#####################################
# Open terminal using pyautogui

#pyautogui.hotkey('win')
#time.sleep(1)
#pyautogui.write('termina')
#time.sleep(1)
#pyautogui.press('enter')
#pyautogui.write('touch text.txt')

#####################################
# Another way to open terminal using pyautogui
pyautogui.hotkey('win')
time.sleep(1)
pyautogui.write('terminal')
#mypath = os.getcwd()+"/Terminal.png"
#print(__file__)
mypath = os.path.dirname(os.path.realpath(__file__)) + "/Terminal.png"
#print(mypath)

isfind = None

while isfind is None:
    isfind = pyautogui.locateOnScreen(mypath , confidence = 0.7)
    
pyautogui.press('enter')
