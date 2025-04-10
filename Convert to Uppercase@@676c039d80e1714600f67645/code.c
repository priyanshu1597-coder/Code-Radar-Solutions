#include <stdio.h>

int main() {
    char str[1000];

    // Read the input string
    fgets(str, sizeof(str), stdin);

    // Convert lowercase to uppercase manually
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // or simply: str[i] = str[i] - 32;
        }
    }

    // Print the result
    printf("%s", str);

    return 0;
}
