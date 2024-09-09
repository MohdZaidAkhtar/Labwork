#include <stdio.h>
#include <stdlib.h> // For exit() function

#define MAX 100 // Define maximum size of the stack

// Structure to represent a stack
typedef struct {
    int top;
    int arr[MAX];
} Stack;

// Function to initialize the stack
void init(Stack *s) {
    s->top = -1;
}

// Function to push an element onto the stack
void push(Stack *s, int value) {
    if (s->top >= MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    s->arr[++s->top] = value;
    printf("%d pushed to stack\n", value);
}

// Function to pop an element from the stack
int pop(Stack *s) {
    if (s->top < 0) {
        printf("Stack Underflow\n");
        return -1; // Return a sentinel value indicating stack is empty
    }
    return s->arr[s->top--];
}

// Function to display the elements of the stack
void display(Stack *s) {
    if (s->top < 0) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are:\n");
    for (int i = s->top; i >= 0; i--) {
        printf("%d\n", s->arr[i]);
    }
}

int main() {
    Stack s;
    init(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Popped value: %d\n", pop(&s));
    
    display(&s);

    return 0;
}

