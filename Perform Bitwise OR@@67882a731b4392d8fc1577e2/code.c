#include <stdio.h>

int main() {
    int num1, num2, result;

    // Input two integers
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Perform bitwise OR operation
    result = num1 | num2;

    // Print the result
    printf("The result of bitwise OR operation between %d and %d is: %d\n", num1, num2, result);

    return 0;
}
