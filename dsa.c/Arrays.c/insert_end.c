#include<stdio.h>
int arr[100],n,i,value,pos;

void insert_end()
{
    printf("enter size of array\t");
    scanf("%d", &n);
    for(i=0;i<n; i++)
    {
        printf("arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    printf("enter value to be inserted\t");
    scanf("%d", &value);
    //n=n+1;
    arr[n]= value;

    printf("final array: \n");
        for(i=0; i<=n; i++)
    {
        printf("%d \n", arr[i]);
    }
}

int main()
{
    insert_end();
    return 0;
}
