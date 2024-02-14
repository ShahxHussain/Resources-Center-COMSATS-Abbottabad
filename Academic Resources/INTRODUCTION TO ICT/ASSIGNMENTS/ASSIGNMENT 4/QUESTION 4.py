

def main():    
    list1=[]
    list2=[]
    num1=int(input("Enter No of Element"))
    for i in range(0, num1):
        value1=int(input("Enter Elements of List1:"))
        list1.append(value1)
    for_sort(list1)
    print("list 1:",list1)
    num2=int(input("Enter No of Element"))
    for i in range(0, num2):
        value2=int(input("Enter Elements of List2:"))
        list2.append(value2)
    for_sort(listA)
    print("list 2:",list2)
    result=list1+list2
    for_sort(result)
listA=[]
def for_sort(listA):
    flag=0
    for i in range(0, len(listA)):
        for j in range(i, len(listA)):
            if(listA[i]>listA[j]):
                temp=listA[i]
                listA[i]=listA[j]
                listA[j]=temp
                flag=1
        if(flag!=1):
            listA[i]=listA[i]        
    print("The merged list is :",listA)
main()

