from itertools import product
from itertools import combinations
n = int(input())
str1= ''.join(input().split())
n1 = int(input())
n2= list(combinations(str1,n1))
n3 = [i for i in n2 if 'a' in i]
print(len(n3)/len(n2))

"""
print(*n2)
print(str1)
f = [i for i in t if 'a' in i]
print(len(f)/len(t))
"""
