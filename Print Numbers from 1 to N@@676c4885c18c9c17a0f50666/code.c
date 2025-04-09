#include <stdio.h>

int main() {
    int N, i = 1;
    printf("Enter a number: ");
    scanf("%d", &N);

    while (i <= N) {
        printf("%d", i);
        if (i < N) {
            printf(" ");
        }
        i++;
    }
    printf("\n");
    return 0;
}
