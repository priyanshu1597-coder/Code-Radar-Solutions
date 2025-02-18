#include <stdio.h>
int main(){
    int a,b,c;
    int d=0;
    scanf("%d",&a);
    for (b=1; b<=a; b++){
        c=a/b;
        if (c==0){
            d+=1;
        }
    }
        if (d==2){
            printf("Prime");

        }
        else{
            printf("Not Prime");
        }
        return 0;


    }