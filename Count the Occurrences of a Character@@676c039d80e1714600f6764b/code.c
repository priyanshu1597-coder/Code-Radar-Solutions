#include <stdio.h>

int main() {
    char str[1000];
    char target;
    int count = 0, i = 0;

    fgets(str, sizeof(str), stdin);

    scanf(" %c", &target);  

    while (str[i] != '\0') {
        if (str[i] == target) {
            count++;
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}