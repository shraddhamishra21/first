#include<stdio.h>
int main(){

for(int i=0;i<5;i++){
            for(int j=0;j<=i;j++){
                printf("*");}

            for(int t=4;t>i;t--){
                
                
                printf("_");
                for(int k=4;k>=i;k--){
                printf("*");}
                for(int p=0;p<i;p++){
                
                
                printf("_");
            }
            printf("\n");
         }
         return 0;

    }    }