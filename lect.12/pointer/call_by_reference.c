#include<stdio.h>
int sum(int *a,int *b){
     *a=100;
     *b=200;
    return *a+*b;
}
int main(){
    int a=10;
        int b=20;
        int add=sum(&a,&b);
     
    printf("The sum of a and b is: %d\n",a+b);
   printf("The sum of a and b is :%d",add);
}