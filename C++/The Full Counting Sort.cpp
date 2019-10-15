
#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    string arr[n]={""};
    
    
    int max=-1;
    for(int i=0; i<n/2; i++)
    {
        int x;
        cin>>x;
        string s;
        cin>>s;
        
        arr[x]=arr[x]+"-"+" "; 
        
      /*  if(x>max)
            max=x;*/
    }
    
    for(int i=n/2; i<n; i++)
    {
        int x;
        cin>>x;
        string s;
        cin>>s;
        
        arr[x]=arr[x]+s+" ";
        
              /*  if(x>max)
            max=x;*/
        
   }
    
   for(int i=0; i<n;i++)
       cout<<arr[i];
    
    cout<<endl;
    
    
    
    
}
