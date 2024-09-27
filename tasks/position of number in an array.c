write a c program to declare and initialize an array of 10 integers. Prompt the user to enter a number and search for that number in array. If the number is found, print its position; otherwise, print "Not Found".

#include <stdio.h>

int main() 
{
  int a[10] = {23, 45, 12, 67, 34, 89, 15, 2, 77, 50},i, searchkey, flag=0, position=-1; 
    printf("Enter a number to search: ");
    scanf("%d", &searchkey);
    for ( i = 0; i < 10; i++) 
{
   if (a[i] == searchkey)
 {
   flag= 1;
   position = i; 
   break;
        }
    }
   if (flag)
 {
        printf("Number is found at position: %d\n", position);
    }
 else 
{
printf("Not Found\n");
    }
    return 0;
}
