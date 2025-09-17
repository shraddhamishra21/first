#include<stdio.h>
int main(){ int num=0;
    for(int i=1;i<7;i++){
        for(int j=1;j<=i;j++){ 
            printf("%d",num);
num++;
        }
        printf("\n");
    }
}