#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *hashTable[SIZE] = {NULL};

    int n, key;
    printf("Enter number of elements to insert: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &key);

        int index = key % SIZE;

        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = key;
        newNode->next = hashTable[index];
        hashTable[index] = newNode;
    }

    printf("\nHash Table (Separate Chaining):\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Index %d: ", i);
        struct Node *temp = hashTable[i];
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }

    return 0;
}