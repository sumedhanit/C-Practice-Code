#include<stdio.h>
int insertion(void);
int main()
{
    int A[20],n;
    printf("enter number of element you want to sort:");
    scanf("%d",&n);
    printf("unsorted array is\n");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=1;i<=n;i++)
    {
       printf("%d",A[i]);
    }
    printf("shorted array is\n");
    insertion();
    return 0;

}
void insertion(void)
{
  int i,j,key;
  for(j=2;j<=n;j++)
  {
      key=A[j];
      i=j-1;
      while(i>0&&A[i]>key)
      {
          A[i+1]=A[i];
          i=i-1;
      }
      A[i+1]=key;
  }
  for(i=1;i<=n;i++)
  {
      printf("%d\n",A[i]);
  }

}