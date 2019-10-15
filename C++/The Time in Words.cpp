#include<iostream>
#include<stdlib.h>
#include<map>

using namespace std;

int main()
{
    
    int h,m;
   cin>>h>>m; 
    
     
    
    
    string s[61];
  // s[0]="one";
   // s[1]="two";
    //cout<<s[0];
    
    
    
    
    
    
s[1]="one";
s[2]="two";//	pronunciation
s[3]=	"three";//	pronunciation
s[4]=	"four";//	pronunciation
s[5]=	"five";//	pronunciation
s[6]=	"six";//	pronunciation
s[7]=	"seven";//	pronunciation
s[8]=	"eight";//	pronunciation
s[9]=	"nine";//	pronunciation
s[10]=	"ten";//	pronunciation
s[11]=	"eleven";//	pronunciation
s[12]=	"twelve";//	pronunciation
s[13]=	"thirteen";//	pronunciation
s[14]=	"fourteen";//	pronunciation
s[15]=	"quarter";//	pronunciation
s[16]= 	"sixteen";//	pronunciation
s[17]=	"seventeen";//	pronunciation
s[18]=	"eighteen";//	pronunciation
s[19]=	"nineteen";//	pronunciation
s[20]=	"twenty";//	pronunciation
 
 
s[21]=	"twenty one";	
s[22]=	"twenty two";//	pronunciation
s[23]=	"twenty three";//	pronunciation
s[24]=	"twenty four";//	pronunciation
s[25]=	"twenty five";//	pronunciation
s[26]=	"twenty six";//	pronunciation
s[27]=	"twenty seven";//	pronunciation
s[28]=	"twenty eight";//	pronunciation
s[29]=	"twenty nine";//	pronunciation
s[30]=	"half";//	pronunciation
    
s[31]=	"thirty one";//	pronunciation
s[32]=	"thirty two";//	pronunciation
s[33]=	"thirty three";//	pronunciation
s[34]=	"thirty four";//	pronunciation
s[35]=	"thirty five";//	pronunciation
s[36]=	"thirty six";//	pronunciation
s[37]=	"thirty seven";//	pronunciation
s[38]=	"thirty eight";//	pronunciation
s[39]=	"thirty nine";//	pronunciation
s[40]=	"forty";//	pronunciation
s[41]=	"forty one";//	pronunciation
s[42]=	"forty two";//	pronunciation
s[43]=	"forty three";//	pronunciation
s[44]=	"forty four";//	pronunciation
s[45]=	"quarter";//	pronunciation
s[46]=	"forty six";//	pronunciation
s[47]=	"forty seven";//	pronunciation
s[48]=	"forty eight";//	pronunciation
s[49]=	"forty nine";//	pronunciation
s[50]=	"fifty";//	pronunciation
s[51]=	"fifty one";//	pronunciation
s[52]=	"fifty two";//	pronunciation
s[53]=	"fifty three";//	pronunciation
s[54]=	"fifty four";//	pronunciation
s[55]=	"fifty five";//	pronunciation
s[56]=	"fifty six";//	pronunciation
s[57]=	"fifty seven";//	pronunciation
s[58]=	"fifty eight";//	pronunciation
s[59]=	"fifty nine";//	pronunciation
s[60]=	"sixty";//	pronunciation
 
    
    
    
    
    
    
    
    
   if(m==0)
    {  
    cout<<s[h]<<" "<<"o' clock";
    
    }
    
    else if(m>0 && m<2 )  
     {
         cout<<s[m]<<" "<<"minute"<<" "<<"past "<<s[h];
         
     }
        
     else if(m>0 && m<30 &&m!=15)  
     {
         cout<<s[m]<<" "<<"minutes"<<" "<<"past "<<s[h];
         
     }
    else if(m>30 && m<60 &&m!=45)
    {
        
        cout<<s[60-m]<<" "<<"minutes"<<" "<<"to "<<s[h+1];
        
        
    }
    else if(m==15)
        cout<<s[m]<<" past "<<s[h];
    else if(m==45)
        cout<<s[45]<<" to "<<s[h+1];
    else if(m==30)
        cout<<s[m]<<" past "<<s[h];
    
    
}
