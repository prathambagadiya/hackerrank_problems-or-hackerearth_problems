#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int i;
    int s[n];
    for(i=0; i<n; i++)
        scanf("%d",&s[i]);


    int d,m;
 int j;
    scanf("%d %d",&d,&m);
    int count=0;
    int sum[n];
    sum[0]=0;
    for(i=0; i<n;i++)
    {
     sum[i+1]=sum[i]+s[i]; 
    }
    
    for(i=0; i<=n-m ;i++)
    {
        if(sum[m+i]-sum[i]==d)
            count++;
        
        
    }

        printf("%d",count);




}
