#!/usr/bin/python3


#print("Name : Ahmed Mohy\nBirth : 1998\nAddress : Giza")

print("Name : Ahmed Mohy")
print("Birth : 1998")
print("Address : Giza")

X=5                 #integer
print(type(X))

X=2.3               #float
print(type(X))

X="AHMED"           #string
print(type(X))

X=[1,1.5,"DODO"]    #list
print(type(X))

X=(1,5,6)           #tuple
print(type(X))

X=True              #boolean
print(type(X))

X=5+6j              #complex
print(type(X))  

print(bool(6 > 1))

thisdict={
    "brand":"BMW",
    "electric":False,
    "year":2020,
    "colors":["black","white","gray"]
}

print(type(thisdict))
print(thisdict["brand"])
print(thisdict.keys())
print(thisdict.values())
print(len(thisdict))

l = ["apple","orange","bnana","apple"]
print(type(l))
print(l)
s = {"apple","orange","bnana","apple"}
print(type(s))
print(s)
