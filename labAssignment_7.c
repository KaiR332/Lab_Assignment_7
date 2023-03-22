#include <stdio.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int bubbleSort(int* array, int n, int* swaps) {
    for(int i=0; i<n-1; i++) 
        for(int j=0; j<n-i-1; j++) {
            if(array[j] > array[j+1]) {
                swap(&array[j], &array[j+1]);
                *swaps = *swaps + 1;
            }
        }
}

int main(void) {
    int array[] = { 97, 16, 45, 63, 13, 22, 7, 58, 72 };
    int n, swaps = 0;

    n = sizeof(array)/sizeof(int);

    printf("Unsorted list: ");
    for(int i=0; i<n; i++)
        printf("%d ", array[i]);

    bubbleSort(array, n, &swaps);

    printf("\n\nSorted list: ");
    for(int i=0; i<n; i++)
        printf("%d ", array[i]);
    printf("\nNumber of swaps: %d", swaps);

    return 0;
}