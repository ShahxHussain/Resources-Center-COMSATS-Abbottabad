import string

def printChars(ch1, ch2, numberPerLine):
    strings = string.digits + string.ascii_uppercase  
    output = strings[strings.index(ch1):strings.index(ch2)+1]

    for start in range(0, len(output), numberPerLine):
        print(output[start:start+numberPerLine])

printChars("0", "Z", 10)
