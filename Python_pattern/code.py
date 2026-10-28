def pattern(n):
    for i in range(n):
        for j in range(n):
            print("*", end=' ')
        print(" ")

def calling():
    number = int(input("Enter a number: "))
    for i in range(number):
        numbers = int(input("Enter number: "))
        pattern(numbers)
calling()

