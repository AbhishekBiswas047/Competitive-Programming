#include <stdio.h>

int main() {
    int row, col;
    int k,w;
    int offset;

    print("Enter row index: ");
    scanf("%d", &row);

    printf("Enter column index: ");
    scanf("%d", &col);

    printf("Enter k(N = 2^k): ");
    scanf("%d", &k);

    printf("Enter w(element size = 2^w bytes): ");
    scanf("%d", &w);

    offset = ((row << k) + col) << w;
    printf("\n offset = %d\n", offset);

    return 0;
}