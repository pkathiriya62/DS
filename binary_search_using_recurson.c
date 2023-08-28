#include <stdio.h>

int binarySearch(int arr[], int l, int h, int x) {
    if (l <= h) {
        int mid = (l+h) / 2;
        if (arr[mid] == x) {
            return mid; 
        }
        else if (arr[mid] < x) {
             binarySearch(arr, mid + 1, h, x); 
        }
        else
        {
             binarySearch(arr, l, mid - 1, x);
        }
    }
    return -1; 
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter the searching value: ");
    scanf("%d", &x);

    int p = binarySearch(arr, 0, n - 1, x);

    if (p != -1) {
        printf("Element found at index %d\n", p+1);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
