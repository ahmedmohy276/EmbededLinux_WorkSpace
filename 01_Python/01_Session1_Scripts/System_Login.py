#!/usr/bin/python3

LoginInfo = {
    "First_User" : {"Username" : "Ahmed","Password" : 1394},
    "Second_User" : {"Username" : "Ali","Password" : 6078},
    "Third_User" : {"Username" : "Amr","Password" : 9345}
}

print("Please Enter Login Data")
print("Username : ")
User_name = input()
print("Password : ")
User_password  = int(input())

if User_name == LoginInfo["First_User"]["Username"] and User_password == LoginInfo["First_User"]["Password"] :
    print("Welcome " + User_name)
    
elif User_name == LoginInfo["Second_User"]["Username"] and User_password == LoginInfo["Second_User"]["Password"] :
    print("Welcome " + User_name)
    
elif User_name == LoginInfo["Third_User"]["Username"] and User_password == LoginInfo["Third_User"]["Password"] :
    print("Welcome " + User_name)
    
else :
    print("Encorrect Entry")








