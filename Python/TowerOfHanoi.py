# s = source
# d = destination
# a = auxiliary 
# TOH = Tower Of Hanoi

def TOH(n, s, d, a):
    if n==1:
        print ("Move disk 1 from source",s,"to destination",d)
        return
    TOH(n-1, s, a, d)

    print ("Move disk",n,"from source",s,"to destination",d)
    TOH(n-1, a, d, s)

# Driver code
n = 4
TOH(n,'A','B','C')

# A, B, C are the name of rods
