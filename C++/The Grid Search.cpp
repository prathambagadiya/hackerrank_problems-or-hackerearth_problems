#include<iostream>

using namespace std;
#include<string.h>
#include<algorithm>

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int R,C;
        cin>>R>>C;

        string str[R];
        for(int i=0; i<R;i++)
        {
              while(str[i].length()==0)
             getline(cin,str[i]);
            //cin>>str[i];
        }

        int r,c;
        cin>>r>>c;

        string str1[r];
        for(int i=0; i<r; i++)
       {    // cin>>str1[i];

       while(str1[i].length()==0)
             getline(cin,str1[i]);


       }

       /* for(int i=0; i<R; i++)
            cout<<str[i]<<endl;
       // cout<endl;

        for(int i=0; i<r; i++)
            cout<<str1[i]<<endl;
        cout<<endl;*/


    /* int i1=   str[1].find(str1[1]);

        cout<<i1<<endl;*/
        
       // cout<<str[0][0]<<endl;
        int ff=0;
        int flag=0;
        for(int i=0; i<=R-r; i++)
        {
            for(int j=0; j<=C-c; j++)
            {
                 flag=0;
                
                if(str[i][j]==str1[0][0])
                {
                    for(int k=0; k<r; k++)
                    {
                        for(int l=0; l<c; l++)
                        {
                            
                            if(str[i+k][j+l]!=str1[k][l])
                            {
                                flag=1;
                                break;
                                
                            }//iner if ststmt
                            
                            
                        }//iner second loop
                        
                        if(flag==1)
                            break;
                        
                        
                    }//innner first loop
                    
                    
                    if(flag==0)
                    {cout<<"YES"<<endl;
                     ff=1;
                       goto pp;
                    }
                    
                } // first if condition
                
                
                
                
                
                
                
                
            }//end of second loop
            
            
           /* if(ff==1)
                break;*/
    
            
        }//first for loop end
        
        
        
        //if(flag==1)
            cout<<"NO"<<endl;
        
        pp: continue;
        
        
        
        
        
        
        
        
        
        
        

  /*  int count=0,flag=0;
    int temp=0,temp1=0;
        for(int i=temp1;i<r; i++)
        {

           for(int j=temp; j<R; j++)
           {
              int i1=   str[j].find(str1[i]);


                 // cout<<"i1= "<<i1<<endl;
                  //cout<<"count= "<<count<<endl;
                  //cout<<"temp= "<<temp<<"temp1= "<<temp1<<endl;
                 if(i1>=0)
                 {
                  count++;
                  temp=j+1;
                  temp1=i+1;
                  if(count==r)
                 {
                   cout<<"YES"<<endl;
                   flag=1;


                 }

                // cout<<"after i1= "<<i1<<endl;
                 // cout<<"count= "<<count<<endl;
                 // cout<<"temp= "<<temp<<"temp1= "<<temp1<<endl;

                  break;

                 }

                 else if(i1<0 && count!=0)
                 {
                    count=0;

                    temp1=0;
                    temp=0;
                    break;



                 }






           }

       if(flag==1)
       break;



        }


        if(flag==0)
          cout<<"NO"<<endl;*/



    }





}

