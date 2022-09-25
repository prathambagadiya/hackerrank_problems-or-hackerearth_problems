
def partition_index(arr,start,end):
    
    pivot = arr[end]
    i=start
    j=end-1
    
    while(i<j):
    
        while(arr[i]<=pivot and i<j):
            i+=1
        while(arr[j]>pivot and j>i):
            j-=1
        if i<j:    
            (arr[i],arr[j])=(arr[j],arr[i])
        
        
    (arr[j],arr[end])=(arr[end],arr[j])
    
    return j    
    
    
def quick_sort(arr,low,high):
    if (low<high):
        p = partition_index(arr,low,high)
        quick_sort(arr,low,p-1)
        quick_sort(arr,p+1,high)
        
arr = [12,43,362,10,56,60]
quick_sort(arr,0,len(arr)-1)
print(arr)        
