#include <stdio.h>

void printBinary(int n) {
    int leadingZero = 1; 
    for (int i = 31; i >= 0; i--) {
        if (n & (1 << i)) {
            printf("1");
            leadingZero = 0; 
        } else if (!leadingZero) { 
            printf("0");
        }
    }

    if (leadingZero) {
        printf("0");
    }

    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    printBinary(n);
    
    return 0;
}