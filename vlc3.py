import serial
import time
import pyautogui
import os
import webbrowser
ArduinoSerial = serial.Serial('COM3', 9600)
time.sleep(10)
while 1:
    incoming = str(ArduinoSerial.readline())
    print incoming
    if 'pause' in incoming:
        pyautogui.typewrite(['space'], 0.2)
    if 'play' in incoming:
        pyautogui.typewrite(['space'],0.2)
    if 'rewind' in incoming:
        pyautogui.typewrite(['p'])
    if 'forward' in incoming:
        pyautogui.typewrite(['n'])
    if 'more' in incoming:
        pyautogui.hotkey('ctrl', 'Add')
    if 'less' in incoming:
        pyautogui.hotkey('ctrl', 'Subtract')
    if 'full screen' in incoming:
        pyautogui.typewrite(['f'])
    if 'leave full screen' in incoming:
        pyautogui.typewite(['esc'])
    if 'quit' in incoming:
        pyautogui.typewrite(['q'])
    if 'stop' in incoming:
        pyautogui.typewrite(['s'])
    if 'mute' in incoming:
        pyautogui.typewrite(['m'])
    if 'shutdown' in incoming:
        os.system("shutdown /s /t 1")
    if 'Chrome' in incoming:
        os.system('start chrome.exe')
    if 'close Chrome' in incoming:
        os.system("taskkill /im chrome.exe /f")
    if 'notepad' in incoming:
        os.system('start notepad.exe')
    if 'close notepad' in incoming:
        os.system('TASKKILL /PID notepad.exe /T')
    if 'command' in incoming:
        os.system('start cmd.exe')
    if 'close command' in incoming:
        os.system("taskkill /im cmd.exe /f")
    if 'photo' in incoming:
        os.startfile('d:/hack/photo/1.jpg')
    if 'close photo' in incoming:
        pyautogui.hotkey('alt','f4')
    if 'video' in incoming:
        os.startfile('d:/hack/video/1.mkv')
    if 'up' in incoming:
        pyautogui.typewrite(['up'])
    if 'down' in incoming:
        pyautogui.typewrite(['down'])
    if 'next' in incoming:
        pyautogui.typewrite(['right'])
    if 'previous' in incoming:
        pyautogui.typewrite(['left'])
    if 'security' in incoming:
        webbrowser.open('https://www.insecam.org/en/view/622959/,')
    incoming =""
