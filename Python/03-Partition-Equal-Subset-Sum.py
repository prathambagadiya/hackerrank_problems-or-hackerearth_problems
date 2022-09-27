"""
Partition Equal Subset Sum
https://www.youtube.com/watch?v=UmMh7xp07kY&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=8&ab_channel=AdityaVerma

Given a non-empty array nums containing only positive integers, find if the array can be partitioned into two subsets such that the sum of elements in both subsets is equal.

Example 1:

Input: nums = [1,5,11,5]
Output: true
Explanation: The array can be partitioned as [1, 5, 5] and [11].
Example 2:

Input: nums = [1,2,3,5]
Output: false
Explanation: The array cannot be partitioned into equal sum subsets.
 

Constraints:

1 <= nums.length <= 200
1 <= nums[i] <= 100

"""
def print_dp(dp,n,total_sum):
    # Print the DP array (not required for code)
    for i in range(n+1): #n
        for j in range(total_sum+1): #W
            print(dp[i][j],end=" ")
        print()


def subset_sum(nums, total_sum):
    ######## Initialization ########
    n = len(nums)
    dp = [[False for j in range(total_sum+1)] for i in range(n+1)]
    
    # if n=0 (we don't have any elements) then, we can make sum=0 with empty subset having n=0, thus for sum=0, True
    #However, we can't make sum=1,2,3... so on with no elements. Hence, for sum = 1+ we will have false
    
    dp[0][0] = True
    for j in range(1,total_sum+1):
        dp[0][j] = False
    
    # if we need sum = 0, then even an empty subset {} will be considered valid.Hence, it will always be True for any           number of elelemtns
    
    for i in range(n+1):
        dp[i][0] = True
        
    ######## Filling the DP matrix ########
    # we will start from 1 as we have already initialized for i=0 and j=0
    
    for i in range(1,n+1):
        for j in range(1,total_sum+1):
            
                # we can only select the element if the value of element is less than the sum
            
            if nums[i-1]<=j:
                            # if we select the element,reduce the sum by it's value. In this question 
                            # we only need True or False, hence, we don't need to add anything for value
                            #Also, we won't take max, we will use or operator -> just take True if any one of 
                            # the conditions is true
                            
                dp[i][j] = dp[i-1][j-nums[i-1]] \
                            or              \
                            dp[i-1][j]
                
            else:
                dp[i][j] = dp[i-1][j]

    print_dp(dp,n,total_sum)            
    return dp[i][j]

def canPartition(nums):
    """
    The array can be partitioned in 2 subsets which have same sum.
    if we take the total sum of all the elements of the array and divide by 2, 
    we just need to find 1 subset having that half sum 
    (as the other subset will automatically have the same half sum 
    becuase total sum - sum of subset 1 = sum of subset 2) i.e. total - total/2 = total/2

    Now, if the total sum is odd. eg : nums = [1,2,3,5] total sum = 11
    we can't divide this sum in 2 equal parts. hence, it will never give us two equal subsets
    
    Hence, we only process if total sum is even. then we just call the previously solved subset sum problem
    subset_sum(nums,total_sum/2) -> if this returns True - we found a subset!
    """
    
    total_sum = sum(nums)
    
    # odd sum
    if total_sum % 2 == 1:
        return False
    
    # Continue if sum is even 
    half_sum = total_sum//2
    
    return subset_sum(nums, half_sum)
    

arr = [1,5,11,5]    
print(canPartition(arr)) 
arr = [1,2,3,5]
print(canPartition(arr)) 
