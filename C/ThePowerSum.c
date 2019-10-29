//DEEPANSHU SAXENA(saxenad765)
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int powerSum(int n,int m,int p)
{
    int a=pow(m,p);
    if(a==n)
        return 1;
    if(a>n)
        return 0;
    m++;
    return powerSum(n,m,p) + powerSum(n-a,m,p);
}
int main() {
    int X; 
    scanf("%i", &X);
    int N; 
    scanf("%i",&N);
    int result = powerSum(X,1,N);
    printf("%d\n", result);
    return 0;
}
