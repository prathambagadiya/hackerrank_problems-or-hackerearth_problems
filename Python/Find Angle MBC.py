import math 
a= int(input())
b= int(input())
c= math.sqrt(a*a+b*b)
an = math.acos(b/c )
de=math.degrees(an)
print(round(de),chr(176),sep='' )



