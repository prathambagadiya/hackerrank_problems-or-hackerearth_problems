#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    
    int rem[k]={0};
    
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        
        rem[temp%k]=rem[temp%k]+1;
        //rem[temp%k]++;
        
    }
    
    int count=0;
    count=count+min(rem[0],1);
    
  if(k%2!=0)
  {
      for(int j=1; j<(k/2)+1;j++)
      count=count+max(rem[j],rem[k-j]);  
  }
    else 
    {
        
        for(int l=1; l<k/2;l++)
         count=count+max(rem[l],rem[k-l]);
            
        count=count+1;
    }
    
    
    cout<<count;
    
    
}
    
