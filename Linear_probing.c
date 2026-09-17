#include <stdio.h>

#define SIZE 5

int main() {
    int hashTable[SIZE];
    for (int i = 0; i < SIZE; i++) hashTable[i] = -1;

    int n, key;
    printf("Enter number of elements to insert: ");
    scanf("%d", &n);

    for (int k = 0; k < n; k++) {
        printf("Enter element: ");
        scanf("%d", &key);

        int index = key % SIZE;
        int i = 0;

        while (hashTable[(index + i) % SIZE] != -1 && i < SIZE) {
            i++;
        }

        if (i < SIZE) {
            hashTable[(index + i) % SIZE] = key;
        } else {
            printf("Hash table overflow!\n");
        }
    }

    printf("\nHash Table (Linear Probing):\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Index %d: %d\n", i, hashTable[i]);
    }

    return 0;
}