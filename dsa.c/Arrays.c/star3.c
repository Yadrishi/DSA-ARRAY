#include<stdio.h>
void star(int n);
int n;
int main()
{ 
    printf("enter number of rows \t");
    scanf("%d", &n);
    star(n);
    return 0;
}

void star(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}