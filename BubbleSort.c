#include <stdio.h>

void BubbleSort(int arr[], int arrLen) {
    for (int i = 0; i < arrLen - 1; i++) {
        for (int j = 0; j < arrLen - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {1, 10, 5, 3, 11, 6, 9, 2};
    int arrLen = 8, i, j;

    printf("Before sort : ");
    for (i = 0; i < arrLen; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    BubbleSort(arr, arrLen);

    printf("After sort : ");
    for (i = 0; i < arrLen; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}