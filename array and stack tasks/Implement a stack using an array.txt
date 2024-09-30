Implement a stack using an array 
#include <stdio.h>

#define MAX 100

int a[MAX],top = -1;
int isFull() {
    return top == MAX - 1;
}

int isEmpty() {
    return top == -1;
}

void push(int i) {
    if (isFull()) {
        printf("Stack overflow! %d\n", i);
        return;
    }
    a[++top] = i;
    printf("%d pushed to stack\n", i);
}

int pop() {
    if (isEmpty()) {
        printf("Stack underflow\n");
        return -1; 
    }
    return a[top--];
}

int peek() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
        return -1;
    }
    return a[top];
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack contents: ");
    for (int j = top; j >= 0; j--) {
        printf("%d ", a[j]);
    }
    printf("\n");
}
int main() {
    push(10);
    push(20);
    push(30);
    
    display(); 

    printf("Top element is: %d\n", peek()); 

    printf("Popped element: %d\n", pop()); 
    display();

    push(40);
    push(50);
    
    display();

    printf("Popped element: %d\n", pop());  
    printf("Popped element: %d\n", pop());
    display();

    while (!isEmpty()) {
        printf("Popped element: %d\n", pop()); 
    }

    display();  

    return 0;
}