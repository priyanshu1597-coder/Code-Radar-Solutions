#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int isBinary = 1;

    // Read the full line (including potential spaces)
    scanf("%s", str);  // You can also use fgets if spaces are part of input

    // Check each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            isBinary = 0;
            break;
        }
    }

    // Output the result
    if (isBinary)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
