#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[1000], subStr[1000];

    // Read the main string
    fgets(mainStr, sizeof(mainStr), stdin);

    // Read the substring to search
    fgets(subStr, sizeof(subStr), stdin);

    // Remove trailing newline characters, if any
    mainStr[strcspn(mainStr, "\n")] = '\0';
    subStr[strcspn(subStr, "\n")] = '\0';

    // Check if substring is present
    if (strstr(mainStr, subStr) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
