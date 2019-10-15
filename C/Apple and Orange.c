#include<stdio.h>>

int main(){
    int s, t, m, n, a, b, apple = 0 , orange = 0, dist;
    scanf("%d %d %d %d %d %d", &s, &t, &a, &b, &m, &n);
    for(int i = 0; i < m; i ++) {
        scanf("%d", &dist);
        if (dist >= s - a && dist <= t - a) apple ++;
    }
    for(int i = 0; i < n; i ++) {
        scanf("%d", &dist);
        if (dist <= t - b && dist >= s - b) orange ++;
    }
    printf("%d\n%d", apple, orange);
    return 0;
}
