#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0};  // Frequency array for all ASCII characters

    // Read input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline

    // Count character frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Display frequencies
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}
