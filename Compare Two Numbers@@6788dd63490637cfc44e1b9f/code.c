#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a>=b && a>=c){
        printf("Equal");
    }else if(b>=a && b>=c){
        printf("First");
    }else{
        printf("Second");
    }
    return 0;

}