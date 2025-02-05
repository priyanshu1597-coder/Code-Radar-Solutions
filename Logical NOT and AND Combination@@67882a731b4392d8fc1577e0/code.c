#include <stdio.h>

int main() {
    int num1, num2;
    printf("num1: ");
    scanf("%d", &num1);
    printf("num2: ");
    scanf("%d", &num2);
    if (!(num1 > 0) && !(num2 > 0)) {
        printf("");
    } else {
        printf("At least one of the numbers is greater than zero.\n");
    }

    return 0;
}
