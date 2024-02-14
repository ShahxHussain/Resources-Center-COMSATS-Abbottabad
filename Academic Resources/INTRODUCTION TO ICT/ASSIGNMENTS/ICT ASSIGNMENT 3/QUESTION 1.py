integer1=eval(input("enter integer 1"))
integer2=eval(input("enter integer 2"))
integer3=eval(input("enter integer 3"))
if integer1==integer2==integer3:
              print("3") #all integers are same
elif integer1==integer2!=integer3 or integer2==integer3!=integer1 or integer3==integer1!=integer2:
                  print("2") #2 integers are same
else:
    print("0") #All integers are different
         
                  
