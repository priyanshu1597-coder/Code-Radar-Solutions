#include <stdio.h>

int main() {
    int rows, num = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= rows - i; j++) {
            printf("  "); // Two spaces
        }
        // Print numbers in increasing order
        for (int k = 1; k <= i; k++) {
            printf("%d ", num);
            num++;
        }
        printf("\n"); // Move to the next row
    }
    return 0;
}