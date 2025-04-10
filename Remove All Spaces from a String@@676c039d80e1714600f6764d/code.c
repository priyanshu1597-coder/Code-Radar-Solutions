#include <stdio.h>

int main() {
    char str[1000], result[1000];
    int i, j = 0;

    // Read input string (including spaces)
    fgets(str, sizeof(str), stdin);

    // Remove spaces
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; // Null-terminate the result string

    // Output the result
    printf("%s\n", result);

    return 0;
}
