#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);
    
    
    if (num == 0) {
        printf("-1\n");
        return 0;
    }

    
    int position = 0;
    int lowestSetBit = num & (-num);
    while (lowestSetBit > 1) {
        lowestSetBit >>= 1; 
        position++;
    }
    printf("%d\n", position);

    return 0;
}