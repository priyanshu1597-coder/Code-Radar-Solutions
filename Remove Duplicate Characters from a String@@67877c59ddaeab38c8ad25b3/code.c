#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int seen[256] = {0};

    // Read input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (!seen[ch]) {
            putchar(ch);
            seen[ch] = 1;
        }
    }

    putchar('\n');
    return 0;
}
