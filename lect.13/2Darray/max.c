#include<stdio.h>

int main ()
{ 

    int i,j;
    int a[2][2]={{2,1},{2,4}};
   int  max=a[0][0];
    for( i=0;i<2;i++){
        for( j=0;j<2;j++){
            if(max<a[i][j]){
                max=a[i][j];
            }
        }
    }
         printf("The max of this array is : %d\n",max);
         
    }
        
    
