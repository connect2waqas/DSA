def pattern_1(n):
    for i in range(n):
        for j in range(n):
            print("*", end=' ')
        print(" ")

def pattern_2(n):
    for i in range(n):
        print(i * "*")

def pattern_3(n):
    for i in range(n + 1):
        for j in range(i):
            print(j+1,end="")
        print()

def pattern_4(n):
    for i in range(n+1):
        for j in range(i):
            print(i,end="")
        print()

def calling():
    number = int(input("Enter a number: "))
    for i in range(number):
        numbers = int(input("Enter number: "))
        # pattern_1(numbers)
        # pattern_2(numbers)
        # pattern_3(numbers)
        pattern_4(numbers)
calling()

