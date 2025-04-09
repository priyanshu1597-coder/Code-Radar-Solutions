#include <stdio.h>

int main() {
    int num, shift_positions, result;
    scanf("%d %d", &num, &shift_positions);
    result = num >> shift_positions;
    printf("%d\n", result);

    return 0;
}