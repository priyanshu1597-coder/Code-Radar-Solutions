#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    char str[1000];
    char replaceChar;

    // Read the input string
    fgets(str, sizeof(str), stdin);
    // Remove trailing newline if exists
    str[strcspn(str, "\n")] = '\0';

    // Read the replacement character
    scanf(" %c", &replaceChar);

    // Replace vowels
    for (int i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            str[i] = replaceChar;
        }
    }

    // Output the modified string
    printf("%s\n", str);

    return 0;
}
