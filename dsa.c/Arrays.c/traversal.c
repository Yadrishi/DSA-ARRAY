//traversal- to update/assign values/ print values of array

#include<stdio.h>
int main()
{
int arr[100], n,i;
printf("enter number of elements in array");
scanf("%d", &n);
printf("Enter values in array \n");
for (i=0;i<n;i++)
{
    printf("arr[%d] =", i);
    scanf("%d", &arr[i]);
}
return 0;
}