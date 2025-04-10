#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    char *wordStart = NULL;
    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            if (wordStart == NULL)
                wordStart = &str[i];  // Mark beginning of word
        } else {
            if (wordStart != NULL) {
                reverseWord(wordStart, &str[i - 1]);  // Reverse the word
                wordStart = NULL;
            }
            if (str[i] == '\0')
                break;
        }
    }

    printf("%s\n", str);
    return 0;
}