#include<stdio.h>

int main ()
{ 

    int i,j;
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for( i=0;i<1;i++)
        for( j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    
    for( i=1;i<2;i++){
        for( j=1;j>0;j--){
            printf("  %d ",a[i][j]);
        } }
         printf("\n");
     for( i=2;i<3;i++){
          for( j=0;j<3;j++)
              printf("%d ",a[i][j]);
      }
    }

        
    
    

    

        