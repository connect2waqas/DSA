def pattern_1(n: int) -> None:
    for i in range(n):
        for j in range(n):
            print("*", end=' ')
        print(" ")

def pattern_2(n: int) -> None:
    for i in range(n):
        print(i * "*")

def pattern_3(n: int) -> None:
    for i in range(n + 1):
        for j in range(i):
            print(j+1,end="")
        print()

def pattern_4(n: int) -> None:
    for i in range(n+1):
        for j in range(i):
            print(i,end="")
        print()

def pattern_5(n: int) -> None:
    for i in range(n):
        print(n * "*")
        n -=1
def pattern_6(n: int) -> None:
    for i in range(n):
        for j in range(1,n-i+1):
            print(j,end="")
        print()
def pattern_7(n: int) -> None:
    for i in range(n):
        for j in range(n - i + 1):
            print(" ",end="")
        for j in range(2 * i + 1):
            print("*",end="")
        for j in range(n - i + 1):
            print(" ",end="")
        print()