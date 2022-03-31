#include<stdio.h>
#include<stdlib.h>
#define MAX 100  //wherever there is MAX in prgm, replace it by 100
void push();
void display();
int pop();


int stack[MAX];
int top = -1;
int item,i;

void push(int item)
{
    if(top>=MAX-1)
    {
        printf("\n\toverflow \t");
    }
    else   
    {
        top++;
        stack[top]=item;
    }
    display();
} 

int pop()
{
    if(top== -1)
    {
        printf("\n\t underflow \t");
    }
    else
    {
        printf("\n\t The popped element is %d \t",stack[top]);     
        top--;
    }
    return 0;
}


void display()
{
    if (top>=0)
    {
         printf("the elements in stack are:- \n");
         for(i=top; i>=0; i--)
         {
             printf("%d\t", stack[i]);
         }
         printf("next choice\t");
       
    }

}


int main()
{
    int choice,item,n;
    printf("how many times do you want to run the code? \t");
    scanf("%d",&n);
      for(i=0;i<n;i++)
    {
    printf("1.Push\t 2.Pop \t 3.Display \t ");
    scanf("%d", &choice);
    switch(choice)
    {
        case (1):
          printf("push- ");
          printf("\n Enter the item \t");
          scanf("%d",&item);
          push(item);
          break;

        case (2):
          printf("pop- ");
          pop();
          break;

        case (3):
          display();
          break;

        default:
          printf("enter correct choice\t");
          break;
    }
    }
       return 0;
}

