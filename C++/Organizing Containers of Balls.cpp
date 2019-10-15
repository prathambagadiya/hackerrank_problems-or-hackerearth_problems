#include<iostream>
#include<algorithm>
#include<stdlib.h>

using namespace std;

int main()
{
    
    int q;
    scanf("%d",&q);
    
    while(q--)
    {
        int n;
        
        scanf("%d",&n);
        
       long long  int c[n]={0};
       long long int b[n]={0};
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {    
                long long int x;
                scanf("%lld",&x);
                c[i]+=x;
                b[j]+=x;
                
                
                
            }       
        }
        
        
     /*  for(int i=0; i<n; i++)
            printf("%lld ",c[i]);
        printf("\n");
        for(int j=0; j<n; j++)
            printf("%lld ",b[j]);
        
        printf("before sort\n");*/
        sort(c,c+n); 
        sort(b,b+n);
     /*   
        for(int i=0; i<n; i++)
            printf("%lld ",c[i]);
        printf("\n");
        for(int j=0; j<n; j++)
            printf("%lld ",b[j]);
        */
        
        
        
         int count=0;
        for(int i=0; i<n; i++)
        {
           
            //for(int j=0; j<n; j++)
           // {
                if(c[i]==b[i])
                    count++;
               
            
        }
        if(count==n)
            printf("Possible\n");
        else
            printf("Impossible\n");
        
        
        
        
        
        
        
    }
    
    
    
    
    
}
