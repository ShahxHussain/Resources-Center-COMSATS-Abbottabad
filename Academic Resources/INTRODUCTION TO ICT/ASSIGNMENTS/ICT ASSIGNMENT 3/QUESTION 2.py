integer=[]

while True:
    num=int(input("Enter Integer: "))
    integer.append(num)
    if num == 0:
        break

integer_count=[]
count=0

for x in range(len(integer)-1):
    integer.sort()
    if integer[x] == integer[x+1]:
            count = count + 1
    else:
            integer_count.append(count+1)
            count=0    
print(max(integer_count))
