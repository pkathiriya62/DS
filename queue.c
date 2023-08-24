#include <stdio.h>
#include <stdlib.h>

#define n 10

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

int main()
{
    int choice, value;

    while (1)
    {
        
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
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
                display();
                break;

            case 4:
                printf("Exiting the program.\n");
                exit(0);

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}