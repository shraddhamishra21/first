#include<stdio.h>
int main(){
   int k=9;
  int  a[5]={1,6,3,4,5};

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){

    if(a[i]+a[j]==k)
    printf("%d%d\n",i,j);

    }
}
}