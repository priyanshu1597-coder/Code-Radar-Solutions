#include <stdio.h>
int main(){
    int num,sum=0,i=1;
    scanf("%d",&num);
    while(i<=num){
        sum=sum+i;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}