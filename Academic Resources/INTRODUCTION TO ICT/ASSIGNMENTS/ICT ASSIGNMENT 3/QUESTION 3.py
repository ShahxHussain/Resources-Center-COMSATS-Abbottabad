import re

flag = 0
password = input("Enter the password")
if re.search('[a-z]',password):
    flag = 0
if re.search('[A-Z]',password):
    flag = 0
if re.search('[0-9]',password):
    flag = 0
if re.search('[$#@]',password):
    flag = 0
if len(password)<6 or len(password)>16:
    flag = 1
if flag == 0:
    print("Password is valid")
else:
    print("Password is invalid")
    
