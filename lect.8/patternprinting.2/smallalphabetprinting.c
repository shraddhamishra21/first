#include <stdio.h>
int main(){

     int num=97;
    for(int i=1;i<5;i++){
        for(int j=1;j<=i;j++){ 
            printf("%c",num);
num++;
        }
        printf("\n");
    }
}