#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int r,c,n;
    cin>>r>>c>>n;
    string str[r];
     
    string str1[r];
    string str2[r];
    
    for(int i=0; i<r; i++)
    cin>>str[i];
    
    if(n==1)
    { for(int i=0; i<r; i++)
    cout<<str[i]<<endl;
    }
    
   else {

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(str[i][j]=='O')
                str[i][j]='1';
            else
                str[i][j]='0';
        }
    }





    int count=1;

    int n1=n;
    n1=5;
    while(n1--)
    {
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c;j++)
            {
              int t= str[i][j]-'0';
                ++t;
                str[i][j]=t+'0';
            }
        }
      

        if(count%2!=0 && count!=1)
        {

            for(int i=0; i<r; i++)
            {
               for(int j=0; j<c; j++)
               {
                   if(str[i][j]=='4')
                   {

                 if(j+1<c)
                   {
                     //cout<<"next element= "<<str[i][j+1]<<endl;
                    if(str[i][j+1]!='4')
                   str[i][j+1]='0';
                   //cout<<"next element= "<<str[i][j+1]<<endl;
                   }


                   if(j-1>=0)
                   {  if(str[i][j-1]!='4')
                   str[i][j-1]='0';}

                   if(i+1<r)
                   { if(str[i+1][j]!='4')
                   str[i+1][j]='0';}

                   if(i-1>=0)
                   { if(str[i-1][j]!='4')
                   str[i-1][j]='0';
                   }



                       str[i][j]='0';



                   }


             }
                
                /* put here */
               
                
            }
        } // if statement end



         if(count%2!=0 && count!=1)
        {

            for(int i=0; i<r; i++)
            {
               for(int j=0; j<c; j++)
               {
                   if(str[i][j]=='5')
                   {

                 if(j+1<c)
                   {
                     //cout<<"next element= "<<str[i][j+1]<<endl;
                    if(str[i][j+1]!='5')
                   str[i][j+1]='0';
                   //cout<<"next element= "<<str[i][j+1]<<endl;
                   }


                   if(j-1>=0)
                   {  if(str[i][j-1]!='5')
                   str[i][j-1]='0';}

                   if(i+1<r)
                   { if(str[i+1][j]!='5')
                   str[i+1][j]='0';}

                   if(i-1>=0)
                   { if(str[i-1][j]!='5')
                   str[i-1][j]='0';
                   }



                       str[i][j]='0';



                   }


             }
               /*put here */ 
                 if(count==3)
                 { str1[i]=str[i];
                  str2[i]=str[i];
                 }
                
            }
        } // if statement end



      count++;
    }


    for(int i=0; i<r; i++)
    {  for(int j=0; j<c;j++)
        {
             str2[i][j]='O';
           if(str[i][j]=='0')
               str[i][j]='.';
            else
                str[i][j]='O';
        
         if(str1[i][j]=='0')
               str1[i][j]='.';
            else
                str1[i][j]='O';
        
           
         
        
        
        
        }
    }
       
        if(n%2==0)
    { for(int i=0; i<r; i++)
        cout<<str2[i]<<endl;}
       
     else {  
    for(int i=5; i<=n; i=i+4)
    {   if(i==n)

    for(int i=0; i<r; i++)
        cout<<str[i]<<endl;}
    //cout<<"second"<<endl;
    
    for(int i=3; i<=n; i=i+4)
    {     if(i==n)
    for(int i=0; i<r; i++)
        cout<<str1[i]<<endl; }
    
    //cout<<"third"<<endl;
   
     }
   }
}
