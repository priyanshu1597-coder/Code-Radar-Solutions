#include<stdio.h>
int countTracilingZero(int n){
    int count = 0;
    while(n%2 == 0 && n!= 0){
        count++;
        n /= 2;
    }
    return count;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", countTracilingZero(n));
    return 0;
}