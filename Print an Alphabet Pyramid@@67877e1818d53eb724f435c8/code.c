#include <stdio.h>

void printAlphabetPyramid(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter number of rows: ");
    scanf("%d", &N);
    
    printAlphabetPyramid(N);
    
    return 0;
}