from .patterns import pattern_7


def main() -> None:
    number = int(input("Enter a number: "))

    for _ in range(number):
        size = int(input("Enter pattern size: "))
        pattern_7(size)


if __name__ == "__main__":
    main()