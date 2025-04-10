#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void capitalizeFirst(char *start, char *end) {
    if (start <= end) {
        *start = toupper(*start);  // Capitalize first letter
        for (char *p = start + 1; p <= end; p++) {
            *p = tolower(*p);      // Make rest lowercase
        }
    }
}

int main() {
    char str[1000];

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    char *wordStart = NULL;
    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            if (wordStart == NULL)
                wordStart = &str[i];  // Start of a word
        } else {
            if (wordStart != NULL) {
                char *wordEnd = &str[i - 1];
                reverseWord(wordStart, wordEnd);
                capitalizeFirst(wordStart, wordEnd);
                wordStart = NULL;
            }
            if (str[i] == '\0')
                break;
        }
    }

    printf("%s\n", str);
    return 0;
}
