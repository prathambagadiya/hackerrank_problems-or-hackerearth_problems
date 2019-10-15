#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
  
    for(int y=0; y<t; y++)
    {
        string str;
        //while(str.length()==0)
        //getline(cin , str);
        cin>>str;
        
        int n=str.length();
        
        int flag=0;
        int i,j;
        for( j=n-2; j>=0;j--){
            
        for(i=n-1; i>j && str[i]<=str[j] ; i--);
        
               
            if(i==j)
                continue;
            
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
             sort(str.begin()+(j+1),str.end()); 
                flag=1;
                break;
                
         
        
             //cout<<str<<endl;
           // if(flag==1)
             //   break;
            
        }
       // cout<<str<<endl;
       // cout<<i<<endl;
        
       
        
        
       if(j<0)
            cout<<"no answer"<<endl;
        else
            cout<<str<<endl;
        
        
        
        
        
        
        
       // int x= next_permutation(str.begin() , str.end());
        
       /* int n=str.length();
        cout<<n<<endl;
        int pivot=-5;
        for(int i=1; i<n; i++)
        {   char c1=str[i];
            char c2=str[i-1];
           // cout<<c1<<" "<<c2;
            if(c1< c2 )
            {  pivot=(i-1)-1;   
              break;
            }
        }
        cout<<str<<endl;
        
        
        cout<<"Pivot="<<pivot<<endl;
        if(pivot==-1)
            cout<<"no answer"<<endl;
        else 
        {
            for(int i=n-1; i>=pivot+1; i--)
            {
                if(str[i]>str[pivot])
                {
                    char temp= str[i];
                    str[i]=str[pivot];
                    str[pivot]=temp;
                    break;    
                }   
            }
            
            int j=n-1;
            int j1=pivot+1;
            while(j>j1)
            {
                char temp1=str[j];
                str[j]=str[j1];
                str[j1]=temp1;
                
                j--;
                j1++;    
            }
            
            cout<<str<<endl;
            
            
            
            
        }
        
        */
        
        
       /* if(x==1)
        cout<<str<<endl;
        else if(x==0 )
            cout<<"no answer"<<endl;   */  
        
    }   
    
}
