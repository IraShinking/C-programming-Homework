#include<stdio.h>
#include<stdlib.h>
#define PLUS 43
#define MINUS 45
#define MULT 42
#define DEVIDE 47
void SimplestF(int m,int n);
int main(void)
{
    int num1,denom1,num2,denom2,result_sum,result_denom;
    char c;
    printf("Enter two fraction to compute:");
    scanf("%d/%d%c%d/%d",&num1,&denom1,&c,&num2,&denom2);
    if(denom1==0||denom2==0)
        exit(0);

    switch(c)
    {
        case PLUS:result_sum=num1*denom2+num2*denom1;result_denom=denom1*denom2;SimplestF(result_sum,result_denom);break;
        case MINUS:result_sum=num1*denom2-num2*denom1;result_denom=denom1*denom2;SimplestF(result_sum,result_denom);break;
        case MULT:result_sum=num1*num2;result_denom=denom1*denom2;SimplestF(result_sum,result_denom);break;
        case DEVIDE:result_sum=num1*denom2;result_denom=num2*denom1;SimplestF(result_sum,result_denom);break;
        default:break;

    }
    return 0;

}
void SimplestF(int m,int n)
{
    int mean;
    int GCD;
    int S=m;
    int N=n;
    while (n!=0)
    {
        mean = m%n;
        m=n;
        n = mean;
    }
    GCD=m;
    S = S/GCD;
    N = N/GCD;
    printf("The final value is:%d/%d",S,N);
}

