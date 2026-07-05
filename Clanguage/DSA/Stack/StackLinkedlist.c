#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;

void push(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Stack is  overflow\n");
        return;
    }
    else
    {
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        printf("Value %d pushed to the stack\n", value);
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack is underflow\n");
    }
    else
    {
        struct Node *temp = top;
        printf("Value %d popped from the stack\n", temp->data);
        top = top->next;
        free(temp);
    }
}

void peek()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element is %d\n", top->data);
    }
}

void display()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    else
    {
        struct Node *temp = top;
        printf("stack elements are\n");
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    int choice, value;
    while (1)
    {
        printf("\n--- Stack (Linked List) Menu ---\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}