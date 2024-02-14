x=eval(input("enter your marks"))
if x in range(0,101):
       if x<=50:
           print("sorry you are FAIL")
       elif x<=60:
           print("your grade is E")
       elif x<=70:
           print("your grade is D")
       elif x<=80:
           print("your grade is C")
       elif x<=90:
           print("your grade is B")
       else:
           print("your grade is A")
else:
       print("Invalid marks")
    
