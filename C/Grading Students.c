#include<stdio.h>

main()
{

   int n;
   scanf("%d",&n);

   int a[60];
   int i;
   for(i=0; i<n; i++)
   scanf("%d",&a[i]);

   for(i=0; i<n; i++)
   {
     if(a[i]>=38){

       if(a[i]%5>2)
       { int r;
           r=a[i]%5;

           a[i]= a[i]-r+5;


       }




     }





   }

int j;
for(j=0 ;j<n; j++)
printf("%d \n",a[j]);




}

