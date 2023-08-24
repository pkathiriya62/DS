#include <stdio.h>
#include <stdlib.h>
#define n 8

int sort(int arr[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 50;
        printf("%d ", arr[i]);
    }
    printf("\n");
    sort(arr);
}