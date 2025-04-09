#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100]; 
    int count = 0;

    
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}