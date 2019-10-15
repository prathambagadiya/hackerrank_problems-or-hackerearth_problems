#include<stdio.h>
main()
{
  int n,m;
  scanf("%d%d",&n,&m);

  int i,j,k;
  int count=0;
  int a[n],b[m];

  int flag=0, tag=0;

  for(i=0; i<n; i++)
  scanf("%d",&a[i]);

  for(i=0; i<m; i++)
  scanf("%d",&b[i]);

  for(k=1; k<=100; k++)
  {
      for(i=0; i<n;i++)
      {
         if(k%a[i]==0)
         flag=1;

         else
         {
           flag=0;
           break;


         }

      }

      if(flag==1)
      {
        for(i=0; i<m;i++)
        {
           if(b[i]%k==0)
           tag=1;

           else{
              tag=0;
              break;

           }
        }


          if(tag==1)
        count++;
      }












  }

 printf("%d",count);







}
