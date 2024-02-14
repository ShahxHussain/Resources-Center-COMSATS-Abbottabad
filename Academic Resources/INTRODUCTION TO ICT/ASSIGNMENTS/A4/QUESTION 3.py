word= input("Enter converse: ")
wordx= list(word)
wordx.pop(3)
wordx.pop(5)
wordx.insert(3, 's') 
wordx.insert(6, 'v')
for items in wordx:
    print(items, end='')

