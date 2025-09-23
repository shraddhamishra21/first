#include<stdio.h>

int main ()
{ 
    int i,j;
    int a[2][2]={{2,1},{2,4}};
    int b[2][2]={{3,5},{4,2}};
    for( i=0;i<2;i++){
        for( j=0;j<2;j++){
           if( b[i][j]==a[i][j])
            printf("%d",a[i][j]);
     
      //  printf("No element is common");
           
        }
    }
          //  printf("The sum of this array is : %d",sum);
        }
    