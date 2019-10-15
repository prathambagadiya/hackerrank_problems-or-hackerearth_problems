#include<stdio.h>
main()
{
    
    int k;
    int n;
    scanf("%d%d",&n,&k);
    int i;
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    int j;
    int count=0;
    for(i=0; i<n; i++)
    {
        for(j=1+i; j<n; j++)
        {
            if( (a[i]+a[j])%k==0 )
                count++;
            
            
        }
        
        
        
        
    }
    
    
    printf("%d",count);
    
    
}
