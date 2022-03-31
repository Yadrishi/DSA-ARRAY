#include<stdio.h>
void linear()
int  arr[100] ;
int i,n,val ;

int linear(int val)
{
for(i=0; i<n; i++)
    {
        if (arr[i]=val)
        {
         printf("the element is found at arr[%d]", i);
        }
    }
     return 0;
}


int main()
{
    printf("enter size of array\t");
    scanf("%d",&n );

    for(i=0; i<n;i++)
    {
        printf("arr[%d] \n",i);
        scanf("%d", &arr[i]);
    }
    printf("enter value to be searched\t");
    scanf("%d", &val);

    linear(val);
 
return 0;
} 
