#include<stdio.h>
int main(){ int i=123,lg,sum=0;
    while(i>0){
        lg=i%10;
        sum=sum+lg;
        i=i/10;
        

    }
    printf("%d",sum);
    
}