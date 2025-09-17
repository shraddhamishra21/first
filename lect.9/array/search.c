#include<stdio.h>
int main(){
    
    int x=3;
    int i;
  int  a[5]={0,-9,3,4,5};
for( i=0;i<5;i++){
    if(x==a[i]){
        break;
  }
}
if(i<5)
printf("%d",i);
else
printf("Not found");
}