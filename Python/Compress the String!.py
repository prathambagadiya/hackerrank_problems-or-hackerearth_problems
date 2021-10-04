import itertools 
str1 = list(input())
for (key,group) in itertools.groupby(str1):
    print( (len(list(group)), int(key)),end=" ")
    
"""
   numbers = [1, 1, 1, 3, 3, 2, 2, 2, 1, 1] 
import itertools 
for (key,group) in itertools.groupby(numbers): 
    print (key,list(group)) 
"""
