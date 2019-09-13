from array import *
l = [int(x) for x in input("enter the elements= ").strip().split(' ')]
a=array('i',l)
print("Array Elements :",end='')
y=int(input("no to be searched"))

for i in a:
    if i is y:
        print("element found at index = %d " %(a.index(i)))
