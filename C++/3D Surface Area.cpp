#include <iostream>

using namespace std;

int main()
{
    int H,W;
    
    cin>>H>>W;
    
    
    int A[H][W];
    
    int row_sum1=0;
    int row_sumN=0;
    
    int colum_sum1=0;
    int colum_sumN=0;
    
    int colum_diff_sum=0;
    
    int row_diff_sum=0;
    for(int i=0; i<H; i++)
    {
        for(int j=0; j<W; j++)
        {
            
            
            cin>>A[i][j];
            
            if(i==0)
            row_sum1=row_sum1+A[0][j];
            
            if(j==0)
            colum_sum1=colum_sum1+A[i][0];
            
            if(i==H-1 )
            row_sumN= row_sumN+ A[H-1][j];
            
            if(j==W-1)
            colum_sumN=colum_sumN+ A[i][W-1];
            if(j>0)
            colum_diff_sum= colum_diff_sum + abs(A[i][j]-A[i][j-1]);
            
            if(i>0)
                row_diff_sum=row_diff_sum+ abs(A[i][j]-A[i-1][j]);
            
            
            
            
        }
        
        
        
        
        
    }
    
    
    
    //cout<<row_sum1<<endl;
    
    
    int Total_Area= row_sum1+row_sumN+colum_sum1+colum_sumN+colum_diff_sum+row_diff_sum +2*(H*W) ;
    
    cout<<Total_Area<<endl;
    
    
}
