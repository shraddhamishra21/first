        
        
   #include<stdio.h>

int main ()
{ 
    // int sum=0;
    int i,j;
    int a[3][3]={{2,1,3},{8,2,4},{1,5,9}};
        for( i=0;i<3;i++){
    for( j=0;j<3;j++){
        if(i==j)
         printf("%d\n",a[j][i]);
        
    }
}
}     
        
