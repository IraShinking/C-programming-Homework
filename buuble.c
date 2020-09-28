#include<stdio.h>
#define N 100
int main(void)
{
    int a[6]={9,11,2,3,6,7};
    int i,j,n=6;
    int t;
    for(j=0;j<n-1;j++)
        for(i=0;i<n-1-j;i++)
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
