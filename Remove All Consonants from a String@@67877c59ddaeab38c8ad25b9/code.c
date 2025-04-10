#include <stdio.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);  // Make case-insensitive
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);  // Read the whole line

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]) && !isVowel(str[i])) {
            // Skip consonants
            continue;
        } else {
            // Print vowels and other characters
            putchar(str[i]);
        }
    }

    return 0;
}
