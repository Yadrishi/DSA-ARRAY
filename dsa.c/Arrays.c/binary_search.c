#include<stdio.h>
int arr[100];
int i,n,element ;

int binary(int element)
{
    int low=0,mid,high=n-1;

    while(low<=high)
    {
    mid=(low+high)/2;
    if(arr[mid]== element)
    {
        printf("element %d found at %d", element, mid);
        break;
    }
    else if (arr[mid]<element)
    {
        low=mid+1;
    }
    else 
    {
        high=mid-1; 
    }
    }
    printf("not found");
   return -1;
}


int main ()
{
printf("enter number of elements of array\t");
scanf("%d", &n);
for(i=0;i<n;i++)
{
    printf("arr[%d]", i);
    scanf("%d", &arr[i]);
}
printf("enter element to be searched\t");
scanf("%d", &element);
binary(element);
return 0;
}
 