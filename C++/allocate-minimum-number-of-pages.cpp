// https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1#
// TC O(log((sum of arr) - (max of arr)) * n) | SC O(1)
class Solution 
{
    public:
    bool f(int arr[], int n, int m, int mid){
        int ans = 0;
        int count = 1;
        for(int i = 0; i < n; i++){
            if(ans + arr[i] > mid){
                count++;
                ans = 0;
            }
            ans += arr[i];
        }
        if(count > m) return false;
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int arr[], int n, int m) 
    {
        // left => In this case => arr = [7,2,5,10,8], m = 5, => largest among these 5 subarray = 10
        // right => In this case => arr = [7,2,5,10,8], m = 1, => largest among these 1 subarray = 7+2+5+10+8
        int left = INT_MIN;
        int right = 0;
        int res = -1;
        for(int i = 0; i < n; i++){
            left = max(left, arr[i]);
            right += arr[i];
        }
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(f(arr, n, m, mid)){
                right = mid - 1;
                res = mid;
            }
            else{
                left = mid + 1;
            }
        }
        return res;
    }
};
