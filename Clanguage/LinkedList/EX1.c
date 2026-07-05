#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *Head = NULL;

struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
// Function to insert at the beginning
void insertAtBeginning(int value)
{
    struct Node *newNode = createNode(value);
    newNode->next = Head; // Link new node to old head
    Head = newNode;       // Update head to new node
    printf("%d inserted at the beginning.\n", value);
}
void searchNode(int value)
{
    struct Node *temp = Head;
    int position = 1;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            printf("Node with value %d found at position %d.\n", value, position);
            return;
        }
        temp = temp->next;
        position++;
    }
    printf("Node with value %d not found in the list.\n", value);
}
void insertAtEnd(int value)
{
    struct Node *newNode = createNode(value);

    if (Head == NULL)
    {
        Head = newNode;
        printf("%d inserted as first node.\n", value);
        return;
    }

    struct Node *temp = Head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    printf("%d inserted at the end.\n", value);
}

void display()
{
    struct Node *temp = Head;
    if (Head == NULL)
    {
        printf("the Linked list is emty ");
        return;
    }
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertAtPosition(int value, int position)
{
    struct Node *newNode = createNode(value);

    if (position == 1)
    {
        newNode->next = Head;
        Head = newNode;
        return;
    }

    struct Node *temp = Head;
    for (int i = 1; i < position - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL)
    {
        printf("Invalid position\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtEnd()
{
    if (Head == NULL)
    {
        printf("The Linked list is empty\n");
        return;
    }

    struct Node *temp = Head;
    struct Node *prev = NULL;

    // If only one node
    if (Head->next == NULL)
    {
        printf("Deleted element is %d\n", Head->data);
        free(Head);
        Head = NULL;
        return;
    }

    // Traverse till the second last node
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    printf("Deleted element is %d\n", temp->data);
    prev->next = NULL; // remove link to last node
    free(temp);
}
void countNodes()
{
    struct Node *temp = Head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("Total number of nodes = %d\n", count);
}
int main()
{
    int choice, value, position;

    while (1)
    {
        printf("\n=== LINKED LIST MENU ===\n");
        printf("1. Insert value at location\n");
        printf("2. Delete value from end\n");
        printf("3. Display list\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            printf("Enter position to insert: ");
            scanf("%d", &position);
            insertAtPosition(value, position);
            break;

        case 2:
            deleteAtEnd();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exiting program...\n");
            exit(0);
        case 5:
            printf("Enter value to insert at beginning: ");
            scanf("%d", &value);
            insertAtBeginning(value);
            break;
        case 6:
            printf("Enter value to insert at end: ");
            scanf("%d", &value);
            insertAtEnd(value);
            break;
        case 7:
            printf("Enter value to search: ");
            scanf("%d", &value);
            searchNode(value);
            break;
        case 8:
            countNodes();
        case default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
