#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    int n, t, sm;
    printf("Enter the number of elements yu want to add:-");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements:-\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element:-", i + 1);
        scanf("%d", &arr[i]);
    }
    system("cls");
    for (int i = 0; i < n - 1; i++)
    {
        sm = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[sm])
            {
                sm = j;
            }
        }
        t = arr[i];
        arr[i] = arr[sm];
        arr[sm] = t;
    }
    printf("The  elements of the array after sorting are:-\n");
    for (int i = 0; i < n; i++)
        printf("%d  elemts is %d\n", i + 1, arr[i]);
}
