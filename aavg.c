#include <stdio.h>
int main()
{
    int a[30], n, i, sum = 0;
    float avg;
    printf("enter the array element");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter number %d=", i + 1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    avg = (float)sum / n;
    printf("average is %f", avg);
    return 0;
}