print("Welcome to my computer quiz!")

playing = input("Do you want to play? ")

if playing.lower() != "yes":
    quit()

print("Okay! Let's play :)")
score = 0

answer = input("What does CPU stand for? ")
if answer.lower() == "central processing unit":
    print('Correct!')
    score += 1
else:
    print("Incorrect!")

answer = input("What does GPU stand for? ")
if answer.lower() == "graphics processing unit":
    print('Correct!')
    score += 1
else:
    print("Incorrect!")

answer = input("What does RAM stand for? ")
if answer.lower() == "random access memory":
    print('Correct!')
    score += 1
else:
    print("Incorrect!")

answer = input("What does PSU stand for? ")
if answer.lower() == "power supply":
    print('Correct!')
    score += 1
else:
    print("Incorrect!")


answer = input("A computer cannot BOOT if it does not have_______? ")
if answer.lower() == "operating system":
    print("correct!")
    score+=1
else:
    print("incorrect!")

answer = input("junk Mail is also called? ")
if answer.lower() == "spam":
    print("correct!")
    score+=1
else:
    print("incorrect!")

answer = input("what is a software program used to view web pages? ")
if answer.lower() == "browser":
    print("correct!")
    score+=1
else:
    print("incorrect!")

answer = input("_____ is approximately one billion byte? ")
if answer.lower() == "gigabyte":
    print("correct!")
    score+=1
else:
    print("incorrect")

answer = input("vendor created program modifications are called? ")
if answer.lower()== "patches":
    print("correct!")
    score+=1
else:
    print("incorrect!")

answer = input("what does WLAN stands for? ")
if answer.lower() == "wireless local area network":
    print("correct!")
    score+=1
else:
    print("incorrect!")



    



print("You got " + str(score) + " questions correct!")
print("You got " + str((score / 10) * 100) + "%.")
