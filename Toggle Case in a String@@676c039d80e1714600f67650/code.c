#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Toggle case
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    // Output the result
    printf("%s", str);

    return 0;
}
