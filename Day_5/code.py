prices = [7, 1, 5, 3, 6, 2]

lowest_price = 7
max_profit = 0

for i in prices:
    if i < lowest_price:
        lowest_price = i
    else:
        potiential_profit = i - lowest_price
        if potiential_profit > max_profit:
            max_profit = potiential_profit

# print(max_profit)

binary = [1, 1, 0, 1, 1, 1, 0, 1]

current_streak = 0
max_streak = 0
for i in binary:
    if i == 1:
        current_streak +=1
        if current_streak > max_streak:
            max_streak = current_streak
    else:
        current_streak = 0
# print(max_streak)
# First way: but not recommend for this question:
lot = [10,20,30,40,50]
lot[::] = lot[::-1]
lot[1::] = lot[:0:-1] # here is the another solution
left = 1
right = len(lot) -1
while left < right:
    lot[left],lot[right] = lot[right], lot[left]
    right -= 1
    left +=1
print(lot)

# second Method: (real solution)
lot = [10,20,30,40,50]
last_car = lot[-1]
for i in range(len(lot) - 1,0,-1):
    lot[i] = lot[i -1]
lot[0] = last_car
print(lot)