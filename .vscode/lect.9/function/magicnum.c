#include<stdio.h>
int magic(){ int i=1234,lg,sum=0;
    while(i>0){
        lg=i%10;
        sum=sum+lg;
        i=i/10;
    while(sum>=10){
        lg=sum%10;
        sum=sum+lg;

    }
    }

    if(sum==1)
    printf("magic num");
else
printf("Not a magic num");
}
    

int main(){
    magic();
}