#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // If lengths are not equal, they can't be rotations
    if (len1 != len2) return 0;

    // Create a new string by concatenating s1 with itself
    char temp[2 * len1 + 1];
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check if s2 is a substring of the new string
    return strstr(temp, s2) != NULL;
}

int main() {
    char str1[1000], str2[1000];

    // Input strings
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from input
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (isRotation(str1, str2))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
