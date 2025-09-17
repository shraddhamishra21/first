#include<stdio.h>
int sum(){
   int a=10;
   int b=20;
   int c=a+b;
   return c;
 //  printf("the sum of a and b is %d",c);
}
int main(){
    int num=sum();
    printf("%d",num);
}