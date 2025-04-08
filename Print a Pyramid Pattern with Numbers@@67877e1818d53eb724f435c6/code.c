#include <stdio.h>

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces for centering
        for (int j = 0; j < n - i; j++) {
            printf("  ");
        }

        // Print numbers in ascending order
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print numbers in descending order
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printPyramid(rows);

    return 0;
}