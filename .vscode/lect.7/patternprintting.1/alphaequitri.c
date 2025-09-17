#include<stdio.h>
int main(){
int num=65;
for(int i=0;i<5;i++){
   
            for(int j=5;j>i;j--){
                printf(" ");}

            for(int t=0;t<=2*i;t++){
                
                
                printf("%c",num);
                num++;
            }
            printf("\n");
         }
         return 0;

    }