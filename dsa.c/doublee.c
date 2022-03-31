#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *next;
    struct node *prev;
};

struct node *start=NULL;
 
 void create()
 {
     int *temp;
     temp=(struct node*) malloc(sizeof(struct node));
if (temp==NULL)
{
    printf("out of memory");
}
else
{
    printf("enter the value");
    scanf("%d", &info);
    if (start==NULL)
    {
        start=temp;
    }
    else
    {
        while(ptr->next!=NULL)
        {
             start->next=temp->prev;
             temp->next=start->prev;
             start=temp;
        }
        ptr->next=temp->prev
        temp->prev=ptr->next
        temp->next=NULL;
    }

}
}


void insert_begin()
{
    {
     int *temp;
     temp=(struct node*) malloc(sizeof(struct node));
if (temp==NULL)
{
    printf("out of memory");
}
else
{
    printf("enter the value");
    scanf("%d", &info);
    if (start==NULL)
    {
        start->next=temp->prev;
        temp->next=start->prev;
        start=temp;
    }
    else
    {
        temp->next= start->prev;
        temp->prev=NULL;
        start=temp;
    }

}
}

void insert_end()
{
     int *temp;
     temp=(struct node*) malloc(sizeof(struct node));
if (temp==NULL)
{
    printf("out of memory");
}
else
{
    printf("enter the value");
    scanf("%d", &info);
    if (start==NULL)
    {
        start->next=temp->prev;
        temp->next=start->prev;
        start=temp;
    }
    else
    {
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp->prev
        temp->prev=ptr->next
        temp->next=NULL;
    }

}
}

void insert_pos()
{
    int *temp, *ptr, p;
    temp=(struct node*) malloc(sizeof(struct node));
if (temp==NULL)
{
    printf("out of memory");
}
else
{
    printf("enter the value");
    scanf("%d", &info);
    if (start==NULL)
    {
        start->next=temp->prev;
        temp->next=start->prev;
        start=temp;
    }
    else
    {
        printf("enter the position at which node has to be inserted");
        scanf("%d", &p);
        
    }
}         

}