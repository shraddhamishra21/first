#include<stdio.h>

int main ()
{ 

    int i,j;
    int a[2][2]={{2,1},{2,4}};
   int  min=a[0][0];
    for( i=0;i<2;i++){
        for( j=0;j<2;j++){
            if(min>a[i][j]){
                min=a[i][j];
            }
        }
    }
         printf("The max of this array is : %d\n",min);
         
    }
        
    
