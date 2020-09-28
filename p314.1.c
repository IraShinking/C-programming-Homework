#include<stdio.h>
int sum_(int a,int b);
int main(void)
{
    int x,y;
    int sum;
    scanf("%d%d",&x,&y);
    sum = sum_(x,y);
    printf("%d\n",sum);
    return 0;
}

int sum_(int a,int b)
{
    int sum;
    sum = a+b;
    return sum;
}
