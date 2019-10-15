#include<iostream>
#include<string>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    
    int length= str.length();
   // cout<<length<< " ";
    
    float l;
    l= sqrt(length);
    int row,colum;
 /* if(length>25 ){ row=floor(sqrt(length)+0.5);
    colum=ceil(sqrt(length));}
  else {  row=l+0.5;
    colum=l+1;}*/
    
    
    row=floor(sqrt(length)+0.5);
    colum=ceil(sqrt(length));
   /* row= floor(sqrt(length) );
   colum=ceil(sqrt(length) );*/
    
    
    //cout<<row<<" "<<colum;
    char  arr[row][colum];
    
    
    int x=0;
    for(int i=0; i<row; i++)
    {   int k=0;
        for(int j=x; j<colum+x; j++)
        {
            //cout<<str[j];
           arr[i][k]=str[j];
            k++;
        }
        
         
        x=x+colum;
        //cout<<endl;
        
        
    }
    
   // cout<<"after"<<endl;
    
    char brr[colum][row];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<colum; j++)
        {
           // cout<<arr[i][j];
            brr[j][i]=arr[i][j];
        }
        
        //cout<<endl;
        
    }
   // cout<<"before"<<endl;
    
    for(int i=0; i<colum; i++)
    {
        
        for(int j=0; j<row; j++)
        {    
            if(brr[i][j]=='a'|| brr[i][j]=='b'||brr[i][j]=='c'||brr[i][j]=='d'||brr[i][j]=='e'||brr[i][j]=='f'||brr[i][j]=='g'||brr[i][j]=='h'||brr[i][j]=='i'||brr[i][j]=='j'||brr[i][j]=='k'||brr[i][j]=='l'||brr[i][j]=='m'||brr[i][j]=='n'||brr[i][j]=='o'||brr[i][j]=='p'||brr[i][j]=='q'||brr[i][j]=='r'||brr[i][j]=='s'||brr[i][j]=='t'||brr[i][j]=='u'||brr[i][j]=='v'||brr[i][j]=='w'||brr[i][j]=='x'||brr[i][j]=='y'||brr[i][j]=='z')
            cout<<brr[i][j];
            else
                break;
            
        }
        cout<<" ";
    }
    
    
    
    
    
    
    
}
