#include <stdio.h>

int count_leading_zeros(unsigned int num) {
    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            break;  
        }
        count++;
    }
    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);
    printf("%d\n", count_leading_zeros(num));
    
    return 0;
}