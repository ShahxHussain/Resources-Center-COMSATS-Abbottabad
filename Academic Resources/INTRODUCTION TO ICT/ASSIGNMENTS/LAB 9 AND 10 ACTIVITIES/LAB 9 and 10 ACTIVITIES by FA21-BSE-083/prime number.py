isPrime = True
i=2
n=int(input('Enter a number'))
while i<n:
      remainder=n%i
      if remainder == 0:
         isPrime=False
         break
      else:
         i=i+1
if isPrime:
   print('Number is Prime')
else:
   print('Number is not Prime')
