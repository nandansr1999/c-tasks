#include <stdio.h>

void reverse(int a[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;

    while (start < end) {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    reverse(a, n);

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}