#include <stdio.h>

int main() {
    int arra[] = {1, 4, 6, 8, 9, 11, 14};

    int high_idx, low_idx, n = 14, mid;
    low_idx = 0;
    high_idx = 6;

    while (low_idx <= high_idx) {
        mid = (low_idx + high_idx) / 2;
        if (n == arra[mid]) {
            break;
        } else if (n > arra[mid]) {
            low_idx = mid + 1;
        } else if (n < arra[mid]) {
            high_idx = mid - 1;
        }
    }

    if (low_idx > high_idx) {
        printf("The number us not in the array");
    } else {
        printf("The number is %d", arra[mid]);
    }
}