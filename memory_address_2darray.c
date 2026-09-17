#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter target row index and column index: ");
    scanf("%d %d", &i, &j);

    char *base_address = (char *)&arr[0][0];
    char *effective_address = base_address + (i * cols + j) * sizeof(int);

    printf("Calculated Effective Address: %p\n", (void *)effective_address);
    printf("Actual Address using &arr[%d][%d]: %p\n", i, j, (void *)&arr[i][j]);

    return 0;
}