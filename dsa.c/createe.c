/*#include<stdio.h>
#include<stdlib.h>

struct node *start=NULL;

struct node
{
    int data;
    struct node *next;
};

int main()
{
    create();
    return 0;
}

void create()
{
    int *ptr, *temp ;
    temp= (struct node*) malloc(sizeof(struct node));
    if (temp==NULL)
    {
        printf("Out of memory");
        exit (0);
    }
    else
    {
        printf("Enter the data :    ");
        scanf("%d", &temp->data);
    }
        temp->next= NULL;

    if(start==NULL)
        {
        start=temp;
        }
    else
        {
            ptr=start;
            while (ptr-> next!=NULL)
                {
                ptr=ptr->next;
                }
            ptr->next=temp;
        }
}
*/





#include<stdio.h>
#include<stdlib.h>

struct node* start;
struct node
{
    int data;
    
}

