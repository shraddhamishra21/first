#include<stdio.h>

int main ()
{ 
     int sum=0;
    int i,j;
    int a[2][2]={{2,1},{2,4}};
    for( i=0;i<2;i++){
        for( j=0;j<2;j++){
            sum=sum+a[i][j];
        }
    }
            printf("The sum of this array is : %d",sum);
        }
    
