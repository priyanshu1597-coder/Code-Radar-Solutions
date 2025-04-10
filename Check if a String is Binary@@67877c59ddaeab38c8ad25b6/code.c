#include <stdio.h>

int main() {
    char str[1000];
    int i, isBinary = 1;

    // Read input string
    scanf("%s", str);

    // Check each character
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            isBinary = 0;
            break;
        }
    }

    if (isBinary)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
