#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int freq[26] = {0}; 
    char ch;
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
        i++;
    }

    int maxFreq = 0;
    char mostFreqChar = 'a';
    for (i = 0; i < 26; i++) {
        if (freq[i] > maxFreq || (freq[i] == maxFreq && i < (mostFreqChar - 'a'))) {
            maxFreq = freq[i];
            mostFreqChar = 'a' + i;
        }
    }

    printf("%c\n", mostFreqChar);

    return 0;
}