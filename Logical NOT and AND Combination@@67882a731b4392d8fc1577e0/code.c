#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    if (!(num1 > 0) && !(num2 > 0)) {
        printf("Neither of the two numbers is greater than zero.\n");
    } else {
        printf("At least one of the numbers is greater than zero.\n");
    }

    return 0;
}
