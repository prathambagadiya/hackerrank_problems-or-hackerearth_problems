#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{ int m,n,r;
  cin>>m>>n>>r;
  int a[m+1][n+1];
  for(int i=1; i<=m; i++)
  {  for(int j=1; j<=n; j++)
      cin>>a[i][j];
      
  }
    
 
 
  int Min1= min(m,n);
   
 int temp1= 2*(m-1)+2*(n-1);
 int rem_rotation=r%temp1;
 
 int rotate_update;
 int m_update=m-2, n_update=n-2;
 
  
 int new_m=m, new_n=n;
  int fix_rotation= rem_rotation;
  
 
 int strat_m=1;
 int strat_n=1;
      while(Min1>=2 )
      {
            
           while(fix_rotation--)
           {
                    int temp2;
               
                   for(int j=strat_n; j<new_n; j++)
                   {    if(j==strat_n)
                        temp2=a[strat_m][strat_n];
                     
                       a[strat_m][j]=a[strat_m][j+1];
                       
                   }
                  
                  int temp3;
               
                    for(int i=new_m; i>strat_m; i--)
                   {    
                        if(i==new_m)
                        temp3=a[new_m][strat_n];
                        if(i>strat_m+1)
                       a[i][strat_n]=a[i-1][strat_n];
                        
                        if(i==strat_m+1)
                        {  
                            a[i][strat_n]=temp2; 
                         
                        }
                       
                   }
                   int temp4;
                  for(int j=new_n; j>strat_n; j--)
                  {   if(j==new_n)
                      temp4=a[new_m][new_n];
                      if(j>strat_n+1)
                          a[new_m][j]=a[new_m][j-1];
                         if(j==strat_n+1)
                             a[new_m][j]=temp3;   
                  }
                  
               
                 for(int i=strat_m;i<new_m;i++)
                 {    
                     if(i<new_m-1)
                     a[i][new_n]=a[i+1][new_n];
                     if(i==new_m-1)
                         a[i][new_n]=temp4;
                     
                 }
               
       
      
         } 
          
          
    
          
               
            strat_m++;
                strat_n++;
               
          
         new_m=new_m-1;
        new_n=new_n-1;
          
         
         Min1=Min1-2;
          rotate_update= 2*(m_update-1)+2*(n_update-1);
               
            m_update= m_update-2;
            n_update= n_update-2;
          
             if(rotate_update>=1)
             fix_rotation=r%rotate_update;
              
       
        
       }
       
 
     for(int i=1; i<=m; i++)
  {  for(int j=1; j<=n; j++)
      cout<<a[i][j]<<" ";
     cout<<endl;
      
  }
    
    
    
}
