#include <stdio.h>
#define n 5
int a[n], top = -1;
int insertEnd(int val)
{
    if (top >= n - 1)
        printf("Array is full......\n");
    else
    {
        top++;
        a[top] = val;
    }
}
int display()
{
    if (top < 0)
        printf("Array is empty...\n");
    else
    {
        for (int i = 0; i <= top; i++)
            printf("%d", a[i]);
    }
}
int delete()
{
    if (top < 0)
        printf("array is empty......\n");
    else
    {
        top--;
    }
}
int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    insertEnd(60);
    // insertEnd(70);
    delete ();
    delete ();
    delete ();
    display();
   


}