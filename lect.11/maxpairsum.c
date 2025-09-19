#include<stdio.h>
int main(){
  int  a[5]={-1,-1,3,4,5};

int Msum=0;
int Csum=0;
    for(int i=0;i<5;i++){
      Csum=Csum+a[i];
     if(Csum<0){
       Csum=0;
      }
    }
  
    if(Csum>Msum){
    Msum=Csum;} 
  printf("%d",Msum);

    }


