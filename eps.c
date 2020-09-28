#include<stdio.h>
int numrtr(int i);
int denmtr(int i);
float power(float base,float n);

int main(void)
{
    int i;
    double n,x,eps;
    double sum;
    float an;
    printf("Enter a number x:\n");
    scanf("%lf",&x);
    printf("Enter a small value eps:\n");
    scanf("&lf",&eps);
    sum = x;
    for(i=1;an>=eps;)
    {
        an = ((double)numrtr(i)/denmtr(i))*(power(x,i));
        if (i%2!=0)
            sum = sum - an;
        else sum = sum + an;
    }
    printf("The sum is:%lf",sum);
    return 0;
}

int numrtr(int i)
{
    int m;
    int t=1,d;
    for (m=1;m<=i;m++)
        {
            d = (2*m-1);
            t = t*d;
        }
    return t;
}

int denmtr(int i)
{
    int m;
    int t=1,d;
    for(m=1;m<=i+1;m++)
    {
        d=m*2;
        t = t*d;
    }
    return t;
}

float power(float base,float n)
{
    int i,p;
    p=1;
    int m;
    m=2*n-1;
    for(i=1;i<=m;++i)
        p = p*base;
    return p;
}

