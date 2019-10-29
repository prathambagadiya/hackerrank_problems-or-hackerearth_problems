#include<stdio.h>
#include<limits.h>
int main()
{
	int n;
	n=6;
	int a[9][9]={ 0 };
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	int z=0,max=INT_MIN;
	for(int i=0;i<n-2;i++)
	{
		for(int j=0;j<n-2;j++)
		{
				z=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
				if(z>max)
				max=z;
				//printf("%d ",max);
		}
	}
	printf("%d",max);
}
