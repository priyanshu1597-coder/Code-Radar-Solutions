#include <stdio.h>
#include <string.h>
#include <ctype.h>

int areAnagrams(char str1[], char str2[]) {
    int freq[26] = {0};

    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str1[i])) {
            freq[tolower(str1[i]) - 'a']++;
        }
        if (isalpha(str2[i])) {
            freq[tolower(str2[i]) - 'a']--;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[1000], str2[1000];


    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (areAnagrams(str1, str2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}