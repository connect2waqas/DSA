"Traversal"
numbers = [0,0,0,0,0]
counter = 1
for i in range(len(numbers)):
    numbers[i] = counter
    counter +=1

print(numbers)

numbers = [0,0,0,0,0]
for i in range(len(numbers)):
    numbers[i] +=i

print(numbers)

v = 0
static_arr = [90,10,100,50,80,70]
for i in range(len(static_arr)):
    if static_arr[i] > v:
        v = static_arr[i]
print(v)

numbers = [1,2,3,4,5,6,7,8,9,10]

numbers[::] = numbers[::-1]
print(numbers)
left = 0
right = len(numbers) - 1

while left < right:
    numbers[left], numbers[right] = numbers[right], numbers[left]
    left +=1
    right -=1

print(numbers)

var = [10,0,0,25,30,0,0,4]
writer = 0
for i in range(len(var)):
    if var[i] != 0:
        var[writer] = var[i]
        writer +=1
while writer < len(var):
    var[writer] = 0
    writer +=1
print(var)
    
"""Given two sorted array: merge them into one array that is sorted: """
A = [1,2,3,4,5]
B = [6,7,8,10,9]
C = [0,0,0,0,0,0,0,0,0,0]
pointer_A = 0
pointer_B = 0
writer_C = 0

while pointer_A < len(A) and pointer_B < len(B):
    if A[pointer_B] < B[pointer_A]:
        C[writer_C] = A[pointer_A]
        pointer_A +=1
        writer_C +=1
    else:
        C[writer_C] = B[pointer_B]
        pointer_B +=1
        writer_C +=1


numbers =  [10, 20, 30, 40, 50]

left = 0
right = len(numbers) - 1
while left < right:
    numbers[left], numbers[right] = numbers[right], numbers[left]
    left +=1
    right -=1

print(numbers)



arr = [10, 20, 30, 20, 10]
left = 0
right = len(arr) -1
def main(arr):
    left = 0
    right = len(arr) -1
    while left < right:
        if arr[left] != arr[right]:
            return False
        elif arr[left] == arr[right]:
            left +=1
            right -=1
    return True
print(main(arr))

heaviest = 0
second_heaviest = 0
numbers = [90, 10, 100, 50, 80]
for i in numbers:
    if i > heaviest:
        heaviest = i
    elif i > second_heaviest and i < heaviest:
        second_heaviest = heaviest
print(heaviest)
print(second_heaviest)