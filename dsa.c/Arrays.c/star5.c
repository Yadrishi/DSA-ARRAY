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
    int j,i,k;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
             for(k=n-1;k>=0;k--)
        {
             printf(" ");
        }
            printf("*");
        }
            
        printf("\n");
    }
}   