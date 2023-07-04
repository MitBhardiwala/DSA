import os

print("Welcome to robo speaker")

txt=""

while(True):
    txt=input("Enter the word you need to speak : ")
    cmd = f"Powershell Add-Type -AssemblyName System.Speech; (New-Object System.Speech.Synthesis.SpeechSynthesizer).Speak('{txt}')"
    os.system(cmd)

    print("Do u want to exit (y/n) :")
    x=input()
    if(x.upper()=='Y'):
        break


