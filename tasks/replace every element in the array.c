write  a c program to declare and initialize an array of 10 integers. Replace every even elements  in the array with 0 and every odd element with 1. Finally, print the modified array

#include <stdio.h>

int main() 
{
    int a[10] = {5, 12, 7, 8, 15, 20, 3, 14, 11, 6},i;
    for (i = 0; i < 10; i++) 
{
        if (a[i] % 2 == 0)
 {
            a[i] = 0; 
        }
 else
 {
            a[i] = 1; 
        }
    }
    printf("Modified array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

