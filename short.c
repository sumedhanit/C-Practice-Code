#include <stdio.h>
int main()
{
    int i, j, key, A[20], n;
    printf("enter array element to short:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)

    {
        scanf("%d", &A[i]);
    }
    printf("unshorted array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
    for (i = 1; i < n; i++)
    {

        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] < key)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
    printf("shorted array is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    return 0;
}
