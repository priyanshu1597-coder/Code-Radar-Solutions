#include <stdio.h>
 int main(){
    int N;
    N=5;
    printf("Enter the value of N:");
    scanf("%d" ,&N);
    for(int i = 1; i <= N; i++){
        printf("%d", i);
    }
    printf("\n");
    return 0;
 }