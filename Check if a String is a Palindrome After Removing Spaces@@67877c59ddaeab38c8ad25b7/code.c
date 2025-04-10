#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000], cleanStr[1000];
    int i, j = 0, len;

    // Read input
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline if present

    // Clean string: remove spaces and convert to lowercase
    for (i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            cleanStr[j++] = tolower(str[i]);
        }
    }
    cleanStr[j] = '\0';

    len = strlen(cleanStr);
    int isPalindrome = 1;
    for (i = 0; i < len / 2; i++) {
        if (cleanStr[i] != cleanStr[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}