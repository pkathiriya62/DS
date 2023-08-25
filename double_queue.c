#include <stdio.h>
#define n 5

int a[n];
int r = -1, f = -1, i;

int insertf(int val)
{
    if ((f == 0 && r == n - 1) || (f == r + 1))
    {
        printf("queue is full.\n");
    }
    else
    {
        if (f == -1)
        {
            f = r = 0;
        }
        else if (f == 0)
        {
            f = n - 1;
        }
        else
        {
            f--;
        }
        a[f] = val;
    }
}

int insertr(int val)
{
    if ((f == 0 && r == n - 1) || (f == r + 1))
    {
        printf("queue is full.\n");
    }
    else
    {
        if (f == -1)
        {
            f = r = 0;
        }
        else if (r == n - 1)
        {
            r = 0;
        }
        else
        {
            r++;
        }
        a[r] = val;
    }
}

int deletef()
{
    if (f == -1)
    {
        printf("queue is empty.\n");
    }
    else
    {
        if (f == r)
        {
            f = r = -1;
        }
        else
        {
            if (f == n - 1)
            {
                f = 0;
            }
            else
            {
                f++;
            }
        }
    }
}

int deleter()
{
    if (f == -1)
    {
        printf("queue is empty.\n");
    }
    else
    {
        if (f == r)
        {
            f = r = -1;
        }
        else
        {
            if (r == 0)
            {
                r = n - 1;
            }
            else
            {
                r--;
            }
        }
    }
}

int display()
{
    if (f == -1)
    {
        printf("queue is empty.\n");
    }
    else
    {
        i = f;
        while (1)
        {
            printf("%d ", a[i]);
            if (i == r)
            {
                break;
            }
            if (i == n - 1)
            {
                i = 0;
            }
            else
            {
                i++;
            }
        }
        printf("\n");
    }
}

int main()
{
    int choice, val;

    do
    {
        printf("queue Operations:\n");
        printf("1. Insert at f\n");
        printf("2. Insert at r\n");
        printf("3. Delete from f\n");
        printf("4. Delete from r\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to insert at the f: ");
            scanf("%d", &val);
            insertf(val);
            break;
        case 2:
            printf("Enter the value to insert at the r: ");
            scanf("%d", &val);
            insertr(val);
            break;
        case 3:
            deletef();
            break;
        case 4:
            deleter();
            break;
        case 5:
            display();
            break;
        case 6:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}