#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char str[1000];
    char word[100], shortest[100];
    int i = 0, j = 0, minLen = INT_MAX;

    // Read the input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove trailing newline

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (j > 0 && j < minLen) {
                minLen = j;
                strcpy(shortest, word);
            }
            j = 0;
        }
        if (str[i] == '\0')
            break;
        i++;
    }

    // Output the shortest word
    printf("%s\n", shortest);

    return 0;
}
