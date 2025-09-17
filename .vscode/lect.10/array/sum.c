#include<stdio.h>
int main(){
    int sum=0;
  int  a[5]={1,2,3,4,5};
  printf("Array is:");
  for(int i=0;i<5;i++){
    sum=sum+a[i];
  }

printf("%d\n",sum);
}
