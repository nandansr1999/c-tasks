write a c program to declare an array of 6 integers. Initialize the array with value provided by the user. Then, print the array in reverse order 

#include <stdio.h>

int main()
{
 int a[6],i;
printf("Enter 6 Integers:\n");
 for (int i = 0; i < 6; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
  printf("Array in reverse order:\n");
    for (int i = 5; i >= 0; i--) 
{
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}