#!/usr/bin/python3


def List_count_number(num,ls):
    count = 0
    for i in ls:
        if i == num:
            count += 1
    return count
    
    
lst = [5,4,3,8,4,7,9,10,5,4]
num = 4
print(num, "is found {} times in list".format(List_count_number(4,lst)))

