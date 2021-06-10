#include <stdio.h>
int main()
{
    int a[30], n, i, sum = 0;
    float avg;
    printf("enter n numbers");
    for (i = 0; i <= n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i <= n; i++)
        sum = sum + a[i];
    avg = sum / n;
    printf("avrage is %f", avg);
    return 0;
}