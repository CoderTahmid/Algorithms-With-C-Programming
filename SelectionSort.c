#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int arr[], int arrLen) {
    for (int i = 0; i < arrLen; i++) {
        int min = arr[i];
        int minValPos = i;

        for(int j = i ; j < arrLen ; j++) {
            if (arr[j] < min) {
                min = arr[j];
                minValPos = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minValPos];
        arr[minValPos] = temp;
    }
}

int main() {
    int arr[] = {2, 1};
    int arrLen = 2;

    printf("Before sort: ");
    for (int i = 0; i < arrLen; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    SelectionSort(arr, arrLen);

    printf("After sort: ");
    for (int i = 0; i < arrLen; i++) {
        printf("%d ", arr[i]);
    }
}