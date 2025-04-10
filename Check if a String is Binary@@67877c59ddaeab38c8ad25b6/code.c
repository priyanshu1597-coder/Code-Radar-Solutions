#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, isBinary = 1;

    // Read the whole line including spaces
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if exists
    str[strcspn(str, "\n")] = '\0';

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
