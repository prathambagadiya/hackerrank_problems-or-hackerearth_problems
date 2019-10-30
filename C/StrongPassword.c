//saxenad765
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    int n,low=0,up=0,sp=0,dig=0,i,a=0; 
    scanf("%d", &n);
    char c[n];
    scanf("%s",c);
    for(i=0;i<n;i++)
    {
        //scanf("%c",&c[i]);
        if(c[i]>=97&&c[i]<=122)
        low++;
        if(c[i]>=65&&c[i]<=90)
        up++;
        if(c[i]>=33&&c[i]<=43||c[i]=='-')
        sp++;
        if(c[i]>=48&&c[i]<=57)
        dig++;       
}
        if(low==0)
        a++;
        if(up==0)
        a++;
        if(sp==0)
        a++;
        if(dig==0)
        a++;
     n=n+a;
    if(n<6)
        a=6-n+a;
    printf("%d",a);
}


