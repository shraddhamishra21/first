#include<stdio.h>
int main(){
    int k=2;
  int  a[5]={-1,2,-3,9,10};
  for(int i=0;i<k;i++){
    for(int j=i;j<k+i;j++){
        if(a[j]<0){
        printf("%d\n",a[j]);
        }
    }

  }
}
