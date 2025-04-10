#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000], cleanStr[1000];
    int i, j = 0, len;

    // Read input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove trailing newline

    // Remove spaces and store in cleanStr
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            cleanStr[j++] = str[i];
        }
    }
    cleanStr[j] = '\0';

    // Check if cleanStr is a palindrome
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
