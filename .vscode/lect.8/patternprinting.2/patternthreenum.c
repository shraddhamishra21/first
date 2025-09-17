#include<stdio.h>
int main (){
    for(int i=1;i<8;i++){
        for(int j=1;j<=i;){
printf("%d",j);
j=j+2;
        }
        printf("\n");
    }
}