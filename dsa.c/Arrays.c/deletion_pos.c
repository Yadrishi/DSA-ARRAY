#include<stdio.h>
int arr[100],n,i,value,pos;

void deletion_pos()
{
    printf("enter size of array\t");
    scanf("%d", &n);
    for(i=0;i<n; i++)
    {
        printf("arr[%d] \t", i);
        scanf("%d", &arr[i]);
    }
     printf("enter position to be deleted\t");
    scanf("%d", &pos);
    if(pos>n)
    {
        printf("does not exist\n");
    }
    else 
    {
        for(i=pos-1; i<=n;i++)
        {
            arr[i]=arr[i+1];
        }
        printf("final array: \n");
        for(i=0; i<n-1; i++)
        {
            printf("%d \n", arr[i]);
        }
    }
}
int main()
{
    deletion_pos();
    return 0;
}
