#include <stdio.h>

int main() {
    int a[8] = {4, 67, 23, 77, 12, 55, 88, 56},max,min,i;
    max = a[0];
    min = a[0];
    for (int i = 1; i < 8; i++)
 {
    if (a[i] > max)
   {
      max = a[i];
    }
        if (a[i] < min) 
 {
     min = a[i]; 
    }
    }
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
