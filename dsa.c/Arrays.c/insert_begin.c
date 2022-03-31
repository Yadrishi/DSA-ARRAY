#include<stdio.h>
int arr[100],n,i,value,pos;


void insert_begin()
{
    printf("enter size of array\");
    scanf("%d", &n);
   for(i=0;i<n; i++)
    {
        printf("arr[%d]", i);
        scanf("%d", &arr[i]);
    }

    printf("enter value");
    scanf("%d", &value);

    n=n+1;
    for(i=n; i>=0; i--)
    // for(i=0; i<=n; i++)
    {
        arr[i+1]=arr[i];
    }
    arr[0]= value;
    printf("final array: \n");
        for(i=0; i<n; i++)
    {
        printf("%d \n", arr[i]);
    }
    
}

int main()
{
    insert_begin();
    return 0;
}