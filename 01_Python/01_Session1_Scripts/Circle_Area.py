#!/usr/bin/python3

from math import pi

def Calc_Circle_Area(radius):
    return pi*(radius**2)

def check_Circle_Radius(radius):
    if radius > 0:
        print("You entered correct value")
        return 1
    else:
        print("You entered wrong value..... You must enter a value greater than 0")
        return 0
        
        
print("Enter circle radius to calculate the area : ")
Rad = float(input())

result = check_Circle_Radius(Rad)

if result == 1:
    area = Calc_Circle_Area(Rad)
    print("circle rea = %f"%area)