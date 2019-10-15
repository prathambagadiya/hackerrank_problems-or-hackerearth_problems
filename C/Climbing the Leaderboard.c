#include<stdio.h>

int main()

{

long long int n,i,k=1,m,j;

scanf("%lld",&n);

long long int a[n],arr[n];

scanf("%lld",&a[0]);

arr[0]=a[0];

for(i=1;i<n;i++)
{
    scanf("%lld",&a[i]);
    if(a[i]!=a[i-1])
    {
        arr[k]=a[i];
        k++;
    }
}
scanf("%lld",&m);
long long int lev[m],rank,temp=k-1;
for(i=0;i<m;i++)
    {
    scanf("%lld",&lev[i]);
        for(j=temp;j>=0;j--)
        {
            if(lev[i]==arr[j])
            {
                rank=j+1;
                break;
            }
            else if(lev[i]<arr[j])
            {
                rank=j+2;
                break;
            }
            else
                rank=1;
        }

    temp=rank-1;
    printf("%lld\n",rank);

    }

return 0;}
