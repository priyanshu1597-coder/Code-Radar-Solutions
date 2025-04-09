#include <stdio.h>

void pyramidPattern(int rows) {
    int num = 1; // Starting number
    for (int i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print numbers
        for (int k = 1; k <= i; k++) {
            printf("%d ", num);
            num++;
        }
        printf("\n"); // Move to the next line
    }
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    pyramidPattern(rows);
    return 0;
}