#include <stdio.h>

int main() {
    char str[1000];
    char target, replacement;
    int i = 0;

    fgets(str, sizeof(str), stdin);

    scanf(" %c", &target);  

    scanf(" %c", &replacement);

    while (str[i] != '\0') {
        if (str[i] == target) {
            str[i] = replacement;
        }
        i++;
    }

    printf("%s", str);

    return 0;
}