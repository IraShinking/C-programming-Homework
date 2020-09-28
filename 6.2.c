#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int m,n,GCD,mean;
    int divistor;
    printf("Enter two inteters:");
    scanf("%d%d",&m,&n);
    if (n==0)
        exit(0);
    for (;n!=0;)
    {
        mean = m % n;
        m = n;
        n = mean;
    }
    GCD = m;
    printf("Greatest common divisor:%d",GCD);
    return 0;
}
