cars = [3, 1, 2, 4]
left = 0
right = len(cars) - 1
while left < right:
    if cars[left] % 2 == 0:
        left +=1
    elif cars[right] % 2 !=0:
        right -=1
    else:
        cars[left],cars[right] = cars[right],cars[left] 
print(cars)
