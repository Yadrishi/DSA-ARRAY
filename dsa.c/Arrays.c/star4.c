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
    int j,i;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        { 
          printf("%d ",j); 
        }
        printf("\n");
    }
}