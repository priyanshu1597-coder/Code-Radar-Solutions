#include <stdio.h>

void alphabet_triangle(int n) {
    // Loop through rows from 1 to n
    for (int i = 1; i <= n; i++) {
        // Print alphabets from 'A' to the ith alphabet
        for (int j = 1; j <= i; j++) {
            // Print the corresponding alphabet
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");  // Move to the next line after each row
    }
}

int main() {
    int n;
    // Input: Number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    // Call the function to print the alphabet triangle
    alphabet_triangle(n);
    
    return 0;
}
