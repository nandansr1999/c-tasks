write a c program to declare and initialize an array of 5 integers with the value {10, 20, 30, 40, 50}. calculate the sum of all the elements in the array and print the result.

#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50},sum = 0;
    
    for (int i = 0; i < 5; i++) {
        sum += a[i];
    }

    // Print the result
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}