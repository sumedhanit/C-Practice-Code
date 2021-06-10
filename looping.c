#include <stdio.h>
int main()
{
    int n, rev = 0;
    printf("enter the number:");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = rem % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("recerse number is%d", rev);
    return 0;
}