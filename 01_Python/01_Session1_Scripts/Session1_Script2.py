#!/usr/bin/python3

import time
import datetime

# Make new list from range 1 to 1000001
newlist = list(range(1,1000001))

# Make new list from range 1 to 1000001
newset = set(newlist)

# Searching for number in list
start_time = time.time()
print(1000000 in newlist)
end_time = time.time()
print("time taken to sarch in list :",end_time-start_time,"Seconds")

# Searching for number in set
start_time = time.time()
print(1000000 in newset)
end_time = time.time()
print("time taken to sarch in set :",end_time-start_time,"Seconds")

now = datetime.datetime.now()
print("Current Date and Time :")
print(str(now)[0:-7])


