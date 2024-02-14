def sumSeries(i):
    sum = 0
    for i in range(1, i + 1):
        sum += i / (i + 1)
    return sum


def main():
    print("i\t    m(i)")
    for i in range(1, 21):
        print(format(i, "-0.0f"), format(" ", "4s"), format(sumSeries(i), ".4f"))


main()
