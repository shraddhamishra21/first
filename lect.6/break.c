#include<stdio.h>

int main()
{  int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(i==9)
        {
            break;
      }
        printf("%d",i);
    }
    return 0;
}
