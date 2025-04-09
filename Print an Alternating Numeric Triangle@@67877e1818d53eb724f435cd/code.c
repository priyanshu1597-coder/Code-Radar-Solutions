#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        int val = (i % 2 == 0) ? 0 : 1; 

        for (int j = 1; j <= i; j++) {
            printf("%d", val);
            if (j < i) {
                printf(" ");
            }
            val = 1 - val; 
        }

        printf("\n");
    }

    return 0;
}