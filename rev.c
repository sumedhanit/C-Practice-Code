#include <stdio.h>
int main()
{
    int n, rev = 0, rem;
    printf("enter the number:");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("recerse number is%d\n", rev);
    printf("first digit%d\n", rem);
    printf("last digit is%d\n", n);
    printf("sum of F abd L is%d", rem + n);

    return 0;
}