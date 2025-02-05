#include <stdio.h>
int main(){
    int num1, num2, result;
    printf("num1");
    scanf("%d", &num1);
    printf("num2");
    scanf("%d", &num2);
    result = num1 | num2;
    printf("the result is %d\n", num1, num2, result);
    return 0;
}