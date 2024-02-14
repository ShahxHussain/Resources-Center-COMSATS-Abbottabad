#             Su  M  T  W  Th  F Sa
Employee0 = [[2, 4, 3, 4, 5, 8, 8], # 0
             [7, 3, 4, 3, 3, 4, 4], # 1
             [3, 3, 4, 3, 3, 2, 2], # 2
             [9, 3, 4, 7, 3, 4, 1], # 3
             [3, 5, 4, 7, 3, 4, 1], # 4
             [3, 4, 4, 6, 3, 4, 4], # 5
             [3, 7, 4, 8, 3, 8, 4], # 6
             [6, 3, 5, 9, 2, 7, 9]] # 7

sum1 = []
x = 0
while x <= 7:
    sum = Employee0[x][0] + Employee0[x][1]+Employee0[x][2]+Employee0[x][3]+Employee0[x][4]+Employee0[x][5] + Employee0[x][6]
    sum1.append(sum)
    x += 1
x = 7

sum1.sort()


def diplayemployee(x1):
    print("Employee", x + 1, "'s Total hours : ", sum1[x1], sep="")


while x >= 0:

    diplayemployee(x)
    x -= 1
