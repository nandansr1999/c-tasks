
#include <stdio.h>

void mergedArr(int a[], int size1, int b[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    while (i < size1) {
        merged[k++] = a[i++];
    }

    while (j < size2) {
        merged[k++] = b[j++];
    }
}

void displayArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {1, 3, 5, 7, 9};
    int b[] = {2, 4, 6, 8, 10};
    int size1 = sizeof(a) / sizeof(a[0]);
    int size2 = sizeof(b) / sizeof(b[0]);
    int merged[size1 + size2]; 
    mergedArr(a, size1, b, size2, merged);

    printf("Merged sorted array: ");
    displayArray(merged, size1 + size2);

    return 0;
}