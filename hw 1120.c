#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define SIZE 100

int main(void)
{
    int a[SIZE][SIZE]={0};
    int i,j,k;
    int n;
    int f;
    printf("Enter the number n:");
    scanf("%d",&n);

    for(k=1;k<=n;k++)
    {
        for(i=k-1;i<n;i++)
            a[k-1][i]=k;
        for(j=k-1;j<n;j++)
            a[j][k-1]=k;
    }
printf("\n");
   for(i=0;i<n;i++)
  {
            for(j=0;j<n;j++)
   {
       printf("%d ",a[i][j]);

   }
   printf("\n");
  }
  return 0;
}
