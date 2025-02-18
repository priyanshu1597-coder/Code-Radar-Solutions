#include <stdio.h>
int main(){
    int num,sum=0,i=0;
    scanf("%d",&num);
    while(i<=num){
        sum=sum+i;
        i++;
    }
    printf("%d\n",num);
    return 0;
}