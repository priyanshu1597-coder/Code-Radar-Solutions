#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int isPalindrome = 1; 

   
    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}