#include <stdio.h>
#include <string.h>

void removeSpaces(char str[]) {
    int i = 0, j = 0;
    // Loop through the string
    while (str[i]) {
        // If the current character is not a space, keep it
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    // Null-terminate the modified string
    str[j] = '\0';
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character that fgets may add
    str[strcspn(str, "\n")] = '\0';

    // Call the function to remove spaces
    removeSpaces(str);

    // Output the modified string
    printf("Output: %s\n", str);

    return 0;
}
