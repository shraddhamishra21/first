#include<stdio.h>


 int sum(int *a,int *b){
     *a=100;
      *b=200;
     return *a+*b;

int main(){
    int a[5]={1,4,8,9,7};
int *p=a;
     for(int i=0;i<5;i++){
    printf("The array is: %d\n",*(p+i));

}
}
 }