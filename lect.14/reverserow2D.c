#include<stdio.h>

int main ()
{ 
    // int sum=0;
    int i,j;
    int a[2][2]={{2,1},{2,4}};
   int  sum=0;
    for( i=0;i<2;i++){
        for( j=1;j>=0;j--){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

       //  printf("The sum of this array is : %d\n",sum);
       //  sum=0;
}
        
    
    

