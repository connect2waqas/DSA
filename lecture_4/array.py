from array import *

# var = array("i",[1,2,3,4,5])

# for i in range(0,5):
#     print(var[i], end=" ")

# print(" ")
# print(var.typecode)

# var = array("i",[1,2,3,4,5,6,7,8,9,10])

# var.append(11)
# var.insert(0,0)
# var.pop()
# var[10]= 11

# print(var)

arr = array("i", [])

n = int(input("how many numbers you would enter: "))

for i in range(n):
    number = int(input("Enter number: "))
    arr.append(number)

for i in arr:
    print(i, end=" ") 
