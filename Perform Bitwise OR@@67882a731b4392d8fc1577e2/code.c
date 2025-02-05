#include <stdio.h>

int main() {
    int num1 = 5; 
    int num2 = 3;  
    int result;
    result = num1 | num2;
    printf("The result of bitwise OR operation between %d and %d is: %d\n", num1, num2, result);

    return 0;
}
