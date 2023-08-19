#include <stdio.h>
#define n 5

int arr[n];
int top = -1;

int insertend(int val)
{
    if (top >= (n - 1))
        printf("Array is full...\n");

    else
    {
        top++;
        arr[top] = val;
    }
}
int firstinsert(int val)
{
    top++;

    // printf("%d\n",top);
    for (int i = 0; i <= top; i++)
    {

        arr[top - i] = arr[top - i - 1];
    }

    arr[0] = val;
}

int deletend()
{
    if (top < 0)
        printf("Arrray is Empty..\n");

    else
    {
        top--;
    }
}
int firstdel()
{
    if (top < 0)
        printf("Array is empty ");

    else
    {
        top--;
        for (int i = 0; i <= top; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
}
int display()
{
    if (top < 0)
    {
        printf("Array is Empty..\n");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
     
    insertend(40);
    insertend(50);
    deletend();
    deletend();
    insertend(60);
    firstinsert(10);
    firstinsert(2);
    insertend(5);
    firstdel();
    firstinsert(555);

    display();
}