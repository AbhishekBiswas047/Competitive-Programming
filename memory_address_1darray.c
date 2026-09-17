#include <stdio.h>

int main() {
    int n, index;

    printf("Enter total number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter index to check address (0 to %d): ", n - 1);
    scanf("%d", &index);

    if (index >= 0 && index < n) {
        printf("Memory address of element at index %d is: %p\n", index, (void*)&arr[index]);
    } else {
        printf("Invalid index!\n");
    }

    return 0;
}