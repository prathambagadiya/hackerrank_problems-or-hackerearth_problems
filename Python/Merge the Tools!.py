from collections import OrderedDict

def merge_the_tools(string, k):
    len1= len(string)
    i=0
    while i<len1 :
        substring = string[i:i+k]
        #print(substring)
        print ("".join(OrderedDict.fromkeys(substring)))
        i= i+k
        
    
    
    # your code goes here
