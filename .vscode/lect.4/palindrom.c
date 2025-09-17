#include<stdio.h>
int main(){ int i,lg,next=0,original;
    printf("enter the value of digit:");
    scanf("%d",&i);
    original=i;
    while(i>0){
        lg=i%10;
        next=next*10+lg;
        i=i/10;
        

    }
    if(next==original){
    printf("its a palindrom");
    
}else{
    printf("its not a palindrom");
}
}