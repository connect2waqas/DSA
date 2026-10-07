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

print(max_profit)


