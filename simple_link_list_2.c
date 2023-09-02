#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void display()
{
    struct node *ptr=head;
    if(head==NULL)
        printf("list is empty");
    
    else 
    {
        while(ptr!=NULL)
        {
            printf("%d",ptr->data); 
            ptr=ptr->next;
        }
    }
    printf("\n");
}

void firstinsert(int val)
{
    struct node *ptr= head;
    struct node *temp = malloc(sizeof (struct node));

    temp -> data = val;
    temp -> next = head;

    head=temp;
}

void firstdelete()
{
    if(head == NULL)
    {
       printf("list is empty...");
       return;
    }
   
    struct node *temp= head;
    head = head->next;
}

int main ()
{
    firstinsert(10);
    firstinsert(20);
    firstinsert(30);
    display();
    
    firstdelete();
    firstdelete();
    display();
}