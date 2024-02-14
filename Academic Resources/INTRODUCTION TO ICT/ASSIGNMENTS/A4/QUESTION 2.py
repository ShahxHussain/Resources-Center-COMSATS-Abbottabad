def interlock(w1, w2):
    if len(w1)==len(w2):
        new=[]
        a1=list(w1)
        a2=list(w2)
        for i in range (0,len(a2)):
            new.append(a1[i])
            new.append(a2[i])
    print(new)

interlock('shoe','cold')