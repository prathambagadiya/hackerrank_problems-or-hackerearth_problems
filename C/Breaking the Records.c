#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int i;
    int score[n];
    for(i=0; i<n; i++)
    {
        
        scanf("%d",&score[i]);
        
    }
    
    int max=score[0], min=score[0];
    int count1=0, count2=0;
    for(i=0 ;i<n; i++)
    {
        
        if(max<score[i])
        {
            max=score[i];
            count1++;
            
        }
        
        if(min>score[i])
        {
          
            min=score[i];
            count2++;
            
        }
        
    }
    
    printf("%d %d",count1,count2);
    
    
    
}
