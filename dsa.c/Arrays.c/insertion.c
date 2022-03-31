// worst case- big of n (constant)

#include<stdio.h>

int arr[100], n, i;

void display()
{
    
    for(i=0; i<n;i++)
    {
        printf("%d ", arr[i]);
    }
   // printf("/n");
}


void insert()
{
    int pos, i=1,n, value;
     printf ("enter value to be inserted ");
    scanf("%d", &value);
    printf ("enter place at which value needs to be inserted ");
    scanf("%d", &pos);
    while (i<=pos)
    {
        arr[i+1]=arr[i]   
    }
    a[pos]=value;
}

int main()
{
    printf ("enter number of elements of array \n");
    scanf("%d", &n);
   
    for(i=0;i<n; i++)
    {
        printf("arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    display();
    insert();
    return 0;
}