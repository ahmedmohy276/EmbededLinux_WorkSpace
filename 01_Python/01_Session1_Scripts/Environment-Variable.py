#!/usr/bin/python3

import os

# get the value of the PATH environment variable

#os.environ['PATH'] += '/usr/bin/pyfiglet'
path = os.environ['PATH']
print(path)

# set a new environment variable
os.environ['MY_VAR'] = 'my value'

# get the value of the new environment variable
my_var = os.environ['MY_VAR']
print(my_var)

