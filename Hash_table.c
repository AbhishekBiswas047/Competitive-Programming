#include <stdio.h>

#define SIZE 5

int main() {
    int hashTable[SIZE];
    
    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = -1; 
    }

    int n, key;
    printf("How many keys to insert (max %d)? ", SIZE);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter key %d: ", i + 1);
        scanf("%d", &key);
        int index = key % SIZE; 
        hashTable[index] = key;
    }

    printf("\nHash Table Contents:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Index %d: %d\n", i, hashTable[i]);
    }

    return 0;
}