#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    scanf("%s", str);  // Read the string

    int i, isBinary = 1;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            isBinary = 0; // Not binary
            break;
        }
    }

    if (isBinary)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
