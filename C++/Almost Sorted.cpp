#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int swap_flag1;
    int swap_flag2;
    
    int A[n+1];
    A[0]=-1;
    int position_swap=0;
     int position_swap2=0;
    
    int one_swap=0;
    int revers_min;
    int B[n+1];
    B[0]=-1;
    
    int C[n+1];
    
    int D[n+1];
    for(int i=1; i<=n; i++)
    {   int cin_t;
        cin>>cin_t;
        A[i]=cin_t;
        
        B[i]=A[i];
        C[i]=A[i];
       D[i]=A[i];
        if(i==1)
        revers_min=A[1];
        if(i>=2 && revers_min>A[i])
            revers_min=A[i];
        
        
        
        if(A[i-1]>A[i] &&(one_swap==0|| one_swap==1))
        {   //cout<<"im"<<endl;
             
            one_swap++;
           /* int temp=A[i];
            A[i]=A[i-1];
            A[i-1]=temp;*/
            if(one_swap==1)
            { position_swap=i;
             
            }
            
            if(one_swap==2)
                  position_swap2=i;
        }
    }  
           
           
           
           
           
           //cout<<"one_swap= "<<one_swap<<endl;
           //cout<<position_swap<<" "<<position_swap2<<endl;
           
           
       if(one_swap==1)
           {
               
               int temp=A[position_swap];
            A[position_swap]=A[position_swap-1];
            A[position_swap-1]=temp;
               
               
           }
        if(one_swap==2)
           {
                
               int temp=A[position_swap-1];
            A[position_swap-1]=A[position_swap2];
            A[position_swap2]=temp;
               
               
               
           }
           
           /*for(int i=1; i<=n; i++)
               cout<<A[i]<<" ";*/
    
    
    
    
           
    //cout<<"A2= "<<B[2]<<endl;
    //cout<<"position_swap-1= "<<position_swap-1<<endl;
    int position_swapnew=position_swap-1;
    int position_swapnew2=position_swap-1;
    
    int swap_flag=0;
    for(int i=1; i<n; i++ )
    {
        if(A[i+1]<A[i])
        {   
         swap_flag=1;
           break;
           
        }
        
        
        
        
    }
          if(!swap_flag)
          { cout<<"yes"<<endl;
           if(one_swap==1)
           cout<<"swap"<<" "<<position_swap-1<<" "<<position_swap<<endl;
          if(one_swap==2)
          cout<<"swap"<<" "<<position_swap-1<<" "<<position_swap2<<endl;
          }
    
    
     if(swap_flag)
     {
     /*for(int i=1; i<=n; i++)
         cout<<B[i]<<" ";*/
       
         int first_break=0;
         int second_break=0;
         
         int count_b=0;
     for(int i=1; i<n; i++)
     {    
            
         if(B[i]>B[i+1] )
         {
             first_break=i;
             count_b=i;
             break;
            
             
         }
        
         
     }
     //l: continue;
         int count_b1=0;
      for(int j=count_b; j<n; j++)
      {
          if(B[j]<B[j+1])
          { second_break=j;
              count_b1=1;
           break;
          }
          
          
          
      }
        
         if(!count_b1)
            second_break=n;
          //cout<<count_b<<endl;
         // cout<<first_break<<" "<<second_break<<endl;
         
         int l1=first_break;
         int l2=second_break;
     
       while(l1<l2)
       {
           int temo=B[l1];
           B[l1]=B[l2];
           B[l2]=temo;
           
           l1++;
           l2--;
           
       }
     
     /*for(int i=1; i<=n; i++)
         cout<<B[i]<<" ";*/
         int coou=1;
        for(int i=1; i<n; i++)
        {
            if(B[i]>B[i+1])
            {    coou=0;
                cout<<"no"<<endl;
                break;
                
            }
            
        }
         if(coou)
         {   cout<<"yes"<<endl;
             cout<<"reverse"<<" "<<first_break<<" "<<second_break<<endl;}
     
     
     }
      
   
}
