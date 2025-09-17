
#include<stdio.h>
int main(){

for(int i=0;i<10;i++){
            for(int j=0;j<i;j++){
                printf(" ");}

            for(int t=10;t>=2*i;t--){
                
                
                printf("*");
            }
            printf("\n");
         }
         return 0;

    }