#include <stdio.h>

void reverse_triangle(int n) {
    
    for (int i = n; i >= 1; i--) {
        
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");  
    }
}

int main() {
    int n;
   
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    
    reverse_triangle(n);
    
    return 0;
}
