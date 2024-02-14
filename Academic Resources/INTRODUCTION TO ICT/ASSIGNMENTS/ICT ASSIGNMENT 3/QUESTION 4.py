def ispalindrome(y):
    global n
    a=str(y)
    temp=a[::-1]
    if temp==a:
        x=int (a)
        n+=1
        if n==11:
            print("\n")
            n=1
        print (format(x,"8d"),end="")
        
def isprime(x):
    prime= True
    i=2
    while i<x:
        
        if (x%i)==0:
            prime=False
            break
        
        i+=1
    if prime == True:
        ispalindrome(x)
n=0        
for i in range(2,94050):
    isprime(i)
                
