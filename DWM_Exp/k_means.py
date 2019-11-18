import math
import random


#elements =[]
l1 = []
l2 = []
#temp = input('Enter the elements = ')
#elements = [int(i) for i in temp.split(' ')]
no1 = int(input('Enter cluster centroid 1 = '))
no2 = int(input('Enter cluster centroid 2 = '))
flag = 0
elements = random.sample(range(1,100),10)
print(elements)
while flag != 1:
    for i in elements:
        cal1 = abs(i-no1)
        cal2 = abs(i-no2)
        if cal1 <= cal2:
            l1.append(i)
        else:
            l2.append(i)
        
    n1 = len(l1)
    n2 = len(l2)
    m1= round(float(sum(l1)/n1),2)
    m2= round(float(sum(l2)/n2),2)

    if no1 == m1 and no2 == m2:
        flag = 1
    else:
        #print(no1)
        #print(no2)
        no1 = m1
        no2 = m2
        
        l1.clear()
        l2.clear()


print(l1)
print(l2)
