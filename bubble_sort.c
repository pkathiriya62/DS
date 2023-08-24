#include <stdio.h>
#include <stdlib.h>
#define n 8
int arr[];
void sort(int arr[])
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%d   \t", arr[i]);
    }
}
int main()
{

    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        arr[i] = rand() % 50;
        printf("%d", arr[i]);
    }
    sort(arr);
}