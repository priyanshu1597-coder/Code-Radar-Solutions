#include<stdio.h>
int main(){
    int a, n;
    scanf("%d %d", &a, &n);
    if(n%2 == 0 && a%2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}