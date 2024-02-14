def is_sorted(listik):
    if sorted(listik) == listik:
        return True
    else:
        return False
    
print(is_sorted(['a','b','a']))
print(is_sorted([1,2,3,0]))
