#!/usr/bin/python3

print("Enter your name : ")
name = input()
print("Hello, "+ name)

print("Enter your age : ")
AGE = int(input())       #Because the input is string by default
print("Your age is {} years old".format(AGE))       #to print a number between string

a=10
b=10
c=20
print(id(a))
print(id(b))

if c > a and b < c :
    print("c is greater than a and b")

if a is b :
    print( "a is b")

if a == b:
    print("a equal b")
    
    
a=[10]
b=[10]


print(id(a))
print(id(b))

if a is b :
    print( "a is b")

if a == b:
    print("a equal b")
    

