#include<stdio.h>

int main ()
{ 
    // int sum=0;
    int i,j;
    int a[2][2]={{2,1},{1,4}};
    for( i=1;i>=0;i--){
        for( j=0;j<2;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    
}
        