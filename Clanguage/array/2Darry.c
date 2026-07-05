#include <stdio.h>
#define SIZE 10

int hashTable[SIZE];

int hashFunction(int key)
{
    return key % SIZE;
}

void insert(int key)
{
    int index = hashFunction(key);
    int i = 0;
    while (hashTable[(index + i) % SIZE] != -1)
    {
        i++;
        if (i == SIZE)
        {
            printf("Hash table is full!\n");
            return;
        }
    }
    hashTable[(index + i) % SIZE] = key;
}

int search(int key)
{
    int index = hashFunction(key);
    int i = 0;
    while (hashTable[(index + i) % SIZE] != -1)
    {
        if (hashTable[(index + i) % SIZE] == key)
            return (index + i) % SIZE;
        i++;
        if (i == SIZE)
            return -1;
    }
    return -1;
}

void display()
{
    printf("\nHash Table is\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("Index %d : %d\n", i, hashTable[i]);
    }
}

int main()
{
    int choice, key, pos;

    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    while (1)
    {
        printf("1. Insert\n2. Search\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter key to insert: ");
            scanf("%d", &key);
            insert(key);
            break;
        case 2:
            printf("Enter key to search: ");
            scanf("%d", &key);
            pos = search(key);
            if (pos == -1)
                printf("Key not found!\n");
            else
                printf("Key found at index %d\n", pos);
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
}
