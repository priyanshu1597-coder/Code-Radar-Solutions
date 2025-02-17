#include <stdio.h>
 int main(){
    int N;
    printf("Enter the value of N: ");
    scanf("%d" ,&N);
    int i = 1;
    while(i <= N){
     printf("%d", i);
     i++;
}
    printf("\n");
    return 0;
 }