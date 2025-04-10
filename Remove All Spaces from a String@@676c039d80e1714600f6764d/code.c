#include <stdio.h>
#include <string.h>

void removeSpaces(char *str) {
    int i, j = 0;
   
    for(i = 0; str[i]; i++) {
      
        if(str[i] != ' ') {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
  
    str[strcspn(str, "\n")] = 0;

    removeSpaces(str);

    printf("Output: %s\n", str);

    return 0;
}
