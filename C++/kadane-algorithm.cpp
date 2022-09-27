#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int maxSum = INT_MIN;
  int Sum=0;
  cout<<"Enter size of the array: "; cin>>n;
  int arr1[n];

  for(int i=0; i<n; i++) cin>>arr1[i];


  for(int i=0; i<n; i++)
  {
   Sum += arr1[i];
   maxSum=max(maxSum,Sum);
   if(Sum < 0) Sum = 0;
  }

  cout<<maxSum<<endl;

  return 0;
}
