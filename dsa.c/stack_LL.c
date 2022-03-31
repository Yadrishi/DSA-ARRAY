#include <stdio.h>
#include<stdlib.h>
void push();
void pop();
int item;
struct node {

struct node*next;
};
int val;
struct node *start=NULL;

void push ()  
{  
     int val;
    struct node *temp = (struct node*)malloc(sizeof(struct node));   
    if(temp == NULL)  
    {  
        printf("not able to push the element");   
    }  
    else   
    {  
        printf("Enter the value");  
        scanf("%d",&val);  
        if(start==NULL)  
        {         
            temp->val = val;  
             temp -> next = NULL;  
            start= temp;  
        }   
        else   
        {  
             temp->val = val;  
            temp->next = start;  
            start= temp;  
               
        }  
        printf("Item pushed");  
          
    }  
}

void pop()  
{  
    struct node *start=NULL;  
    int val;  
    struct node * temp;  
    if (start == NULL)  
    {  
        printf("Underflow");  
    }  
    else  
    {  
        item = start->val;  
         temp= start;  
        start = start->next;  
        free( temp);  
        printf("Item popped"); 
    }  
} 

void main()
{
    int choice;
    printf("enter a choice \t 1. push\n 2. pop \n 3. display\n");
    switch (choice)
        {
            case(1):
            printf("push- ");
          printf("\n Enter the item \t");
          scanf("%d",&val);
          push(val);
          break;

        case (2):
          printf("pop- ");
          pop();
          break;

        /*case (3):
          display();
          break; */

        default:
          printf("enter correct choice");
          break;
        }

}



