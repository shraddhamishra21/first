#include<stdio.h>
// int sum(int *a,int *b){
//      *a=100;
//      *b=200;
//     return *a+*b;
// }
int main(){
    int a=10;
    int b=20;
    printf("The value of a is %d and b is %d before swapping\n",a,b);
  int  *p1=&a;
  int  *p2=&b;
        a=*p1+*p2;
        b=*p1-*p2;
        a=*p1-*p2;
     
    printf("The value of a is %d and b is %d after swapping\n",a,b);
}
