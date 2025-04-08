#include <stdio.h>

void reverse_triangle(int n) {
    // Loop through rows from n down to 1
    for (int i = n; i >= 1; i--) {
        // Print numbers from 1 up to the current row number (i), in reverse order
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");  // Move to the next line after each row
    }
}

int main() {
    int n;
    // Input: Number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    // Call the function to print the reverse triangle
    reverse_triangle(n);
    
    return 0;
}
