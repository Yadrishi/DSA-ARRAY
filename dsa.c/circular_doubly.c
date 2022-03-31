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
    struct node *ptr, *temp;
    temp= (struct node*) malloc((sizeof(struct node));
    if (temp==NULL)
    {
        printf("out of memory");
        exit(0);
    }
    else 
    {
        printf("enter value: ");
        scanf("%d", &info);
        temp->next->NULL;
        temp->prev->NULL;
        if (start==NULL)
        {
            start=temp;
            temp->next=start;
            temp->prev=start;
        }
        else 
        {
            ptr=start;
            while(ptr->next!=start)
            {
                ptr=ptr->next;
            }
            temp->prev=ptr;
            temp->next=start;
            ptr->next=temp;  
        }
    }
}


void insert_begin()
{
    struct node *ptr, *temp;
    temp= (struct node*) malloc((sizeof(struct node));
    if (temp==NULL)
    {
        printf("out of memory");
    }
    else 
    {
        printf("enter value: ");
        scanf("%d", &info);
        if (start==NULL)
        {
            start=temp;
        } 
        else
        {
           ptr=start;
           while(ptr->next!=NULL)
           {
               ptr=ptr->next;
           }
           ptr->next=temp;
           temp->prev=ptr;
           ptr->next=NULL;
        }
    }   
}

void display()
{
    while(ptr->next!=NULL)
    {
        printf("%d", ptr->info);
        ptr=ptr->next;
    }
}

void insert_end()
{
struct node *temp, *ptr;
temp=(struct node*) malloc(sizeof(struct node));
if (temp=NULL);
{
    printf("out of memory");
}
else
{
 printf("enter value: ");
 scanf("%d", &info);
    if (start==NULL)
    {
        start->temp;
    }
    else 
    {
            ptr=start;
            while(ptr->next!=NULL) //check  while(ptr->start!=start)
            {
                ptr=ptr->next;
            }
            temp->prev=ptr;

            ptr->next=temp->prev; //ptr->next=temp in friend
            temp->next=NULL;
    }
}
}

void insert_pos()
{
    struct node *temp, *ptr, *t;
temp=(struct node*) malloc(sizeof(struct node));
if (temp=NULL);
{
    printf("out of memory");
}
else
{
 printf("enter value: ");
 scanf("%d", &info);
    if (start==NULL)
    {
        start->prev=start;
        start->next=start;
        start=temp;
    }
    else
    {
    ptr=start;
    printf("enter position after which node needs to be inserted: \n");
    scanf("%d", &pos);
    i=1;
    while (i<=pos)
    {                  
        ptr=ptr->next;
        i++;
    }
    ptr->prev->next=temp;
    temp->prev=ptr->prev;
    ptr->prev=temp;
    temp->next=ptr;
    }
}
}

void del_end()
{
    struct node* ptr, *next;
    if (start==NULL)
    {
        printf("list is empty");
    }
    else if(start->next=NULL)
    {
        ptr=start;
        printf("the deleted element is %d", ptr->info);
        start=NULL;
        free (start);
    }
    else 
    {
        ptr=start;
        while(ptr->next!=start)
        {
            ptr=ptr->next;
        }
        printf("the deleted node is", ptr->info);
        ptr->prev->next= start;
        free(ptr);
    }   
}

void del_begin()
{
    struct node *ptr,*next;
    if (start=NULL)
    {
        printf("the list doesn't exist");
    }
    else if (start->next= NULL)
    {
        ptr=start;
        printf("the deleted element is ", ptr->info);
        ptr->next=ptr;
        free(ptr);
    }
    else
    {
        pt=start;
        t=start;
        while(ptr->next!=start)
    {
        ptr=ptr->next;
    }
    start=start->next;
   ptr->next=start;
   start->prev=ptr;

    free(t);
    }
}


void del_pos()
{
    struct node* ptr, *next, *temp;
    int n;
    if (start==NULL)
    {
        printf("list is empty");
    }
    else if(start->next=NULL)
    {
        ptr=start;
        printf("the deleted element is %d", ptr->info);
        start=start;
        free (start);
    }
    else 
    {
    printf("Enter position of node to be deleted");
    scanf("%d", &n);
        ptr=start;
        while(ptr->next!=n)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=ptr->next->prev;
        ptr->next->prev= temp;
        free(ptr);

}