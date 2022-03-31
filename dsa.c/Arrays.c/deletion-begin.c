#include<stdio.h>
int arr[100],n,i,value,pos;

void deletion_begin()
{
    printf("enter size of array\t");
    scanf("%d", &n);
    for(i=0;i<n; i++)
    {
        printf("arr[%d] \t", i);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<=n;i++)

    {
        arr[i]=arr[i+1];
    }
    n=n-1;

    printf("final array: \n");
        for(i=0; i<n; i++)
        {
            printf("%d \n", arr[i]);
        }

 }
int main()
{
    deletion_begin();
    return 0;
}
