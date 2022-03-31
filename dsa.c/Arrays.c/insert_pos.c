#include<stdio.h>
int arr[100],n,i,value,pos;


void insert_pos()
{
    printf("enter size of array\t");
    scanf("%d", &n);
    for(i=0;i<n; i++)
    {
        printf("arr[%d] \t", i);
        scanf("%d", &arr[i]);
    }
    printf("enter value to be inserted\t");
    scanf("%d", &value);
     printf("enter position \t");
    scanf("%d", &pos);
   
    n=n+1;
    for(i=n; i>=pos; i--)
    {
        arr[i+1]=arr[i]; 
    }
    arr[pos]= value;
    printf("final array: \n");
        for(i=0; i<n; i++)
    {
        printf("%d \n", arr[i]);
    }
}

int main()
{
    insert_pos();
    return 0;
}