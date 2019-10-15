#include<stdio.h>
main()
{
    int x[3][3];
    int i,j;
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
         scanf("%d",&x[i][j]);
    
    }
    
    
    /*for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
         printf("%d " ,a[i][j]);
       printf("\n");
    }
    */
    
    
      /*possible magic matries only 8 */
        int a[3][3]= {8, 1, 6, 3, 5, 7, 4, 9, 2};
    
          int b[3][3]= {6, 1, 8, 7, 5, 3, 2, 9, 4 };
    
         int  c[3][3]=  {4, 9, 2, 3, 5, 7,8, 1, 6};
    
        int d[3][3]={2, 9, 4, 7, 5, 3, 6, 1, 8}; 
    
        int e[3][3]= {8, 3, 4, 1, 5, 9, 6, 7, 2};
    
       int f[3][3] = {4, 3, 8,9, 5, 1, 2, 7, 6};
    
             int g[3][3] =  {6, 7, 2, 1, 5, 9, 8, 3, 4};
    
          int h[3][3]= {2, 7, 6, 9, 5, 1, 4, 3, 8};;
            

    /*for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
         printf("%d " ,h[i][j]);
       printf("\n");
    }*/
    
    
    int count[8];
    
    for(i=0; i<8; i++)
    count[i]=0;
    
    int sum[8];
    for(i=0; i<8; i++)
    sum[i]=0;
    
    //finding the cost for each matrix and store thier cost in sum array
    for(i=0;i <3; i++)
    {
        for(j=0; j<3; j++)
        {
            count[0]=x[i][j]-a[i][j];
            if(count[0]<0)
                count[0]=-count[0];
            sum[0]=sum[0]+count[0];
            
            
            count[1]=x[i][j]-b[i][j];
            if(count[1]<0)
                count[1]=-count[1];
            sum[1]=sum[1]+count[1];
            
            
            count[2]=x[i][j]-c[i][j];
            if(count[2]<0)
                count[2]=-count[2];
            sum[2]=sum[2]+count[2];
            
            
            count[3]=x[i][j]-d[i][j];
            if(count[3]<0)
                count[3]=-count[3];
            sum[3]=sum[3]+count[3];
            
            
            
            count[4]=x[i][j]-e[i][j];
            if(count[4]<0)
                count[4]=-count[4];
            sum[4]=sum[4]+count[4];
            
            
            count[5]=x[i][j]-f[i][j];
            if(count[5]<0)
                count[5]=-count[5];
            sum[5]=sum[5]+count[5];
            
            
            count[6]=x[i][j]-g[i][j];
            if(count[6]<0)
                count[6]=-count[6];
            sum[6]=sum[6]+count[6];
            
            
            count[7]=x[i][j]-h[i][j];
            if(count[7]<0)
                count[7]=-count[7];
            sum[7]=sum[7]+count[7];
            
            
            
            
            
            
            
            
            
        }
        
        
        
        
    }
    
     /* for(i=0; i<8; i++)
    printf("%d ",sum[i]);*/
    
    
    //fnding the min for sum array that the matrix converted in magic with minimum cost
    int min;
    min=sum[0];
    
    int t=0;
    for(i=0;i<8; i++)
    {
        if(min>sum[i])
        {min=sum[i];
         t=i;
        }   
    }
    
    printf("%d",min);
    
   
}
