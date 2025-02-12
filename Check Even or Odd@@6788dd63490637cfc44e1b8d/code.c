#include <stdio.h.
int main()
{
    int num;
  printf("enter the integer:");
  scanf("%d", num);
  if (num%2==0){
    printf("the number %d is even.\n", num);
  }  else{
    printf("the number %d is odd.\n", num);
  }
    return 0;
}