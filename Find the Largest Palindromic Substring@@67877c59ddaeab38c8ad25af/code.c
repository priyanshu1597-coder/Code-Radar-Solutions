#include <stdio.h>
#include <string.h>

// Helper function to expand around center and return length of palindrome
int expandAroundCenter(char *s, int left, int right, int *start) {
    int len = strlen(s);
    while (left >= 0 && right < len && s[left] == s[right]) {
        left--;
        right++;
    }
    *start = left + 1;
    return right - left - 1;
}

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';  // Remove newline

    int start = 0, maxLen = 0;

    for (int i = 0; i < strlen(s); i++) {
        int leftStart, rightStart;

        int len1 = expandAroundCenter(s, i, i, &leftStart);     // Odd length
        int len2 = expandAroundCenter(s, i, i + 1, &rightStart); // Even length

        if (len1 > maxLen) {
            maxLen = len1;
            start = leftStart;
        }
        if (len2 > maxLen) {
            maxLen = len2;
            start = rightStart;
        }
    }

    for (int i = start; i < start + maxLen; i++) {
        putchar(s[i]);
    }
    printf("\n");

    return 0;
}
