//Two Sum Problem
#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
    vector<pair<int,int>>v;
    sort(arr.begin(),arr.end());
    int l=0, r=n-1;
    int sum=0;
    int flag=0;
    while(l<r){
        sum=arr[l]+arr[r];
        if(sum<target)
        {
            l++;
        }
        else if(sum>target)
            r--;
        else{
            v.push_back(make_pair(arr[l], arr[r]));
            flag=1;
            l++;
            r--;
        }
    }
    if(flag!=1){
         v.push_back(make_pair(-1,-1));
        return v;
    }
    else
        return v;
    
}
int main()
{
   int n=4,target=9;
   vector<int> arr={2,7,11,13};
   vector<pair<int,int>> ans;
   ans=twoSum(arr,target,n);
  
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i].first<<" "<<ans[i].second<<endl;
   }
   return 0;

}
