#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int arr[], int arrLen) {
    for (int i = 1; i < arrLen; i++) {
        int current = i;
        int prev = i - 1;
        int temp = arr[current];

        while (prev >= 0 && arr[prev] > temp) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = temp;
    }
}

int main() {
    int arr[] = {1, 10, 4, 5, 7, 8, 9, 2, 3, 6};
    int arrLen = 10;
    printf("Before sort: ");
    for (int i = 0; i < arrLen; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    InsertionSort(arr, arrLen);

    printf("After sort: ");
    for (int i = 0; i < arrLen; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}