#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    scanf("%s", str);  // Read input string

    int isBinary = 1;  // Assume it's binary initially

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            isBinary = 0;  // Found a non-binary character
            break;
        }
    }

    if (isBinary) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
