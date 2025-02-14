#include <stdio.h>

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Compare the two numbers and print the greater one
    if (num1 > num2) {
        printf("The greater number is %d\n", num1);
    } else if (num2 > num1) {
        printf("The greater number is %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
