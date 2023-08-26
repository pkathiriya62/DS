#include <stdio.h>
#include <stdlib.h>

#define n 5

int a[n];
int f = -1, r = -1;

void insert(int value)
{
    if (r >= n - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        if (f < 0)
        {
            f = 0;
        }
        r++;
        a[r] = value;
        printf("%d inserted into the queue.\n", value);
    }
}
void delete()
{
    if (f < 0)
    {
        printf("Queue is empty...\n");
    }
    else
    {
        printf("%d deleted from the queue.\n", a[f]);
        f++;
        if (f > r)
        {
            f = r = -1;
        }
    }
}

void insertfirst(int value)
{
    if (f == 0)
    {
        printf("Can't insert at the beginning \n");
    }
    else if (f > 0)
    {
        f--;
        a[f] = value;
        printf("%d inserted at the beginning of the queue.\n", value);
    }
    else
    {
        printf("Queue is not initialized.\n");
    }
}

void deletelast()
{
    if (f < 0)
    {
        printf("Queue is empty...\n");
    }
    else
    {
        printf("%d deleted  end of the queue.\n", a[r]);
        r--;
        if (r < f)
        {
            f = r = -1;
        }
    }
}



void display()
{
    if (f < 0)
    {
        printf("\nQueue is empty.\n");
    }
    else
    {
        printf("Queue elements: ");
        for (int i = f; i <= r; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Insert at the Beginning\n");
        printf("4. Delete from the End\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insert(value);
                break;

            case 2:
                delete();
                break;

            case 3:
                printf("Enter value to insert at the beginning: ");
                scanf("%d", &value);
                insertfirst(value);
                break;

            case 4:
                deletelast();
                break;

            case 5:
                display();
                break;

            case 6:
                printf("Exiting the program.you can leave now.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}