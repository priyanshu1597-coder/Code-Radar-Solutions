#include <stdio.h>
int main(){
    int temp;
    scanf("%d" , &temperature);
    if (temperature<=0){
        printf("Freezing");
    }else {
        printf("Above Freezing");
    }
    return 0;
}