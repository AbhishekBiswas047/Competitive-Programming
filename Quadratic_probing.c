#include <stdio.h>

#define SIZE 7

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

        while (hashTable[(index + i * i) % SIZE] != -1 && i < SIZE) {
            i++;
        }

        if (i < SIZE) {
            hashTable[(index + i * i) % SIZE] = key;
        } else {
            printf("Could not find open slot using Quadratic Probing!\n");
        }
    }

    printf("\nHash Table (Quadratic Probing):\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Index %d: %d\n", i, hashTable[i]);
    }

    return 0;
}