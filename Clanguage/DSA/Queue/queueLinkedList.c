#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *front = NULL;

struct Node *rear = NULL;
void enqueue(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (rear == NULL)
    {
        front = rear = newNode;
        printf("Enqueued %d\n", value);
        return;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
        printf("Enqueued %d\n", value);
    }
}
void dequeue()
{
    if (front == NULL)
    {
        printf("Queue Underflow\n");
        return;
    }
    else
    {
        struct Node *temp = front;
        printf("Dequeued %d\n", temp->data);
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
    }
}
void display()
{
    struct Node *temp = front;
    if (temp == NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    int choice, value;
    while (1)
    {
        printf("\n--- Queue Menu ---\n");
        printf("1. enqueue\n2. dequeue\n3. Display\n4+. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}