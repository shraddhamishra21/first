#include<stdio.h>
int main(){
  int  a[5]={1,2,3,2,1};
  int check=0;
  
for(int i=0;i<5/2;i++){ 
if(a[i]!=a[5-i-1]){
check=0;
break;
}
}


if(check)
    printf("palindrom");
else
printf("not a palindrom");
}
