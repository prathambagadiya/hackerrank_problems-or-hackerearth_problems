#include<iostream>

#include<string.h>

using namespace std;

int main()
{
   int n,m;
    cin>>n>>m;
    
    char a[20][20];int ans;
    
    string str[n];
    for(int i=0; i<n; i++)
    {
          cin>>str[i];
        for(int j=0; j<m; j++)
        {
         a[i+1][j+1]=str[i][j];   
        }
       
    }
    
   /* for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            cout<<a[i][j];
        
        cout<<endl;
    }*/
    
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            
            int r=0;
            
            while(a[i][j-r]=='G'&&a[i][j+r]=='G' && a[i-r][j]=='G' && a[i+r][j]=='G'  )
            {
                a[i-r][j]=a[i+r][j]=a[i][j-r]=a[i][j+r]='0';
                
            
            
            
            for(int I=1; I<=n;I++)
            {
                for(int J=1; J<=m;J++ )
                {
                    int R=0;
                    
                      while(a[I][J-R]=='G'&&a[I][J+R]=='G' && a[I-R][J]=='G' && a[I+R][J]=='G'  )
            {
                //a[I-R][J]=a[I+R][J]=a[I][J-R]=a[I][J+R]='0';
                          
                ans=max(ans, (1+r*4)*(1+R*4));
                          R++;
            }
                    
                    
            }      
            }
            
            r++; 
            }
          
        r=0;
        
     while(a[i][j-r]=='0'&&a[i][j+r]=='0' && a[i-r][j]=='0' && a[i+r][j]=='0'  )
            {
                a[i-r][j]=a[i+r][j]=a[i][j-r]=a[i][j+r]='G';
                r++;
            }
        
        }
        
        
    }
    
    cout<<ans<<endl;
    
    
}
