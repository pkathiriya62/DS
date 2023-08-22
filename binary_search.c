#include <stdio.h>
int binarySearch(int array[], int x) {
    int l = 0;
    int h = 9;

    while (l <= h) 
    {
        int mid = (l+h) / 2;

        if (array[mid] == x) {
            return mid+1; 
        } else if (array[mid] < x) {
            l = mid + 1; 
        } else {
            h = mid - 1; 
        }
    }
    return -1; 
}

int main() {
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int x;
    printf("\t2,  4,  6,  8,  10,  12,  14,  16,  18,  20\n");

    printf("enter your element to search in array if available. :");
    scanf("%d",&x);

    int position = binarySearch(array, x);

    if (position != -1) {
        printf("element %d found at index %d\n", x, position);
    } else {
        printf("element %d not found in the array\n", x);
    }
}