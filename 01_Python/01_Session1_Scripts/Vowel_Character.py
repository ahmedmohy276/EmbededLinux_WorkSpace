#!/usr/bin/python3

vowelchar = {'a', 'e', 'i', 'o', 'u'}
def Check_vowel_char(char):
    if char in vowelchar:
        print("%s is a vowel." % char)
    elif char == 'y':
        print("Sometimes letter y stand for vowel, sometimes stand for consonant.")
    else:
        print("%s is a consonant." % char) 
    
    
charcter = input("Input an alphabet letter : ")
Check_vowel_char(charcter.lower())

