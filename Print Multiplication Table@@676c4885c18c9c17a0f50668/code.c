#include <stdio.h>
int main(){
    int num,sum=0,i=0;
    scanf("%d",&num);
    while(i<=9){
        i++;
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}