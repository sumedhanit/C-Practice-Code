#include <stdio.h>
void sum1(void);
int main()
{
    sum1();
    return 0;
}
void sum1() //takes nothing returns nothing
{
    int i, a, s = 0;
    printf("enter the value of a:");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
        s = i + s;
    printf("sum is %d", s);
}

