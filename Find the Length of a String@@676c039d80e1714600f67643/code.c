#include <stdio.h>

int main() {
    char str[1000];
    int length = 0;

    if (fgets(str, sizeof(str), stdin) != NULL) {
        while (str[length] != '\0' && str[length] != '\n') {
            length++;
        }
    }

    printf("%d\n", length);

    return 0;
}