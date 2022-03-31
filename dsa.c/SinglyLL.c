#include<stdio.h>
#include<stdlib.h>

void create();
void display();
void display_reverse();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void search();


struct node
{
    int info;
    struct node *next;
};

struct node *start=NULL;


int getcount()
{
    int count;
    count = 1;
    struct node *ptr;
    ptr = start;
    while(ptr->next!=start)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}

int main()
{
    int check;
    printf("Enter what do you want:\n1. To check the choice\n2. Quit the program\n");
    scanf("%d",&check);
    if(check!=1 && check!=2)
    {
        printf("Wrong option:)\n");
        exit(0);
    }
    while(check==1)
    {
        int choice;
        printf("Enter your choice: \n1. Create\n2. Insert at begining\n3. Insert at end\n4. Insert at random position\n5. Delete at beginning\n6. Delete at end\n7. Delete at random position\n8. Search element\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case(1):
            {
                int n;
                printf("Enter no. of lists you want to create: ");
                scanf("%d",&n);
                for(int i=0;i<n;i++)
                {
                    create();
                }
                break;
            }

            case(2):
            insert_begin();
            break;

            case(3):
            insert_end();
            break;

            case(4):
            insert_pos();
            break;

            case(5):
           delete_begin();
            break;

            case(6):
            delete_end();
            break;

            case(7):
           delete_pos();
            break;

            case(8):
            search();
            break;

            default:
            printf("Wrong choice! Try again:)");
            break;
        }
        printf("Enter what do you want:\n1. To check the choice\n2. Quit the program\n");
        scanf("%d",&check);
    }
    
    return 0;
}


void create()
{
    struct node *temp,*ptr;
    temp=(struct node*) malloc(sizeof(struct node));
    if (temp==NULL)
    {
        printf("Out of memory");
        exit(0);
    }
    printf("Enter the data: \t");
    scanf("%d", &temp->info);
    temp->next= NULL;

    if (start==NULL)
    {
        start=temp;
    }
    else
    {
    ptr=start;
    while(ptr->next != NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp; 
    }
  
}

void display()
    {
        struct node *ptr=start;
        while(ptr->next!=NULL)
        {
            printf("%d", ptr->info);
            ptr= ptr->next;
        }
    }

void insert_begin()
{
    struct node *ptr, *temp;
    temp= (struct node*) malloc(sizeof(struct node));
    if (temp= NULL)
    {
        printf("out of memory");
        exit(0);
    }
    else 
    {
        printf("enter value ");
        scanf("%d", &temp->info);
        temp->next=NULL;
        if (start==NULL)
        {
             start=temp;
        }
        else
        {
            temp->next= start;
            start=temp;
           
        }
    }
}

void insert_end()
{
    struct node *ptr,*temp;
    int info;
    temp=(struct node*) malloc(sizeof(struct node));
    if (temp=NULL)
{
    printf("out of memory");
}
else 
{
printf("enter value");
scanf("%d",&info);

temp->next=NULL;
if (start=NULL)
{
    start->next=temp; //only one
    start=temp; //no-one
}
else
{
    ptr=start;
    while (ptr->next !=NULL)  //already LL
    {
        ptr=ptr->next;
    }
    ptr->next= temp;
}
}

}


void insert_pos()
{
    struct node *temp, *ptr;
    int info,pos ,i;
    temp= (struct node*) malloc(sizeof(struct node));
    if (temp=NULL) 
    {
        printf("no memory space");
    }  
    else 
    {
        printf("enter value");
        scanf("%d", &info);
        if (start=NULL)
        {
            start=temp;        
        }
        else
        {
            printf("enter the position at which you want node to be inserted: ");
            scanf("%d", &pos);
            ptr=start;
            i=1;
            while(i<pos)
            {
                ptr=ptr->next;
                i++;
            }
            temp->next= ptr->next;
            ptr->next= temp;             //check boundary conditions also 
        }
    }

}


void delete_begin()
{
    struct node *ptr;
    int info;
    if (start=NULL)
    {
       printf("there is no list");  // no node
    }
    else if(start->next=NULL)  //one node only
      {
          ptr=start;
          start=NULL;
          printf("info of ptr ", ptr->info);
          free(ptr); 
      }
    else
    {
        ptr=start;
        start=start->next;
        printf("info of ptr ", ptr->info);
        free(ptr);
    }
}

void delete_end()
{
    struct node *ptr, *t;
    int info;
if(start=NULL)
{
    printf("list is empty");
}
else if (start->next=NULL)
{
ptr=start;
printf("the deleted element is ", ptr->info);
start=NULL;
free(ptr);
}

else 
{
ptr=start;
while(ptr->next!= NULL)
{
    t=ptr;
    ptr=ptr->next;
}
  t->next=NULL;  
free(ptr);
}

}


void delete_pos()
{
    struct node *ptr, *temp;
    int i=1, pos;
    if (start==NULL)
    {
        printf("no list exists");
    }
    else if (start->next=NULL)
    {
        ptr=start;
        start=NULL;
        free(ptr);
    }
    else
    {
        ptr=start;
        temp=start;
        printf("enter position after which the node needs to be deleted");
        scanf("%d", &pos);
        while(i<=pos)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next= ptr->next;
        ptr->next=NULL;
         free(ptr);
    }
}
