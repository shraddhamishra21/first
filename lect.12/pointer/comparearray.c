#include<stdio.h>

int main(){
    int a[5]={1,4,8,9,7};
    int b[5]={1,4,5,9,7};
    int *p1=a;
    int *p2=b;
     for(int i=0;i<5;i++){
    if(*(p1+i)==*(p2+i))
    printf(" equal!\n");

       printf(" not equal!\n");

     }
}
