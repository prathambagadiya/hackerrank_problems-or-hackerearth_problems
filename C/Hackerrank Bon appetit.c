#include <stdio.h>

int main() 
{
  int n, k, b, sum = 0, sub;
    scanf("%d %d", &n, &k);
  int bill[n];
//   scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%d", &bill[i]);
    sum = sum + bill[i];
  }
  scanf("%d", &b);
  sub = sum - bill[k];
  if (b == (sub / 2))
   {
    printf("Bon Appetit");
  }
   else {
    printf("%d", b - (sub / 2));
  }
}

