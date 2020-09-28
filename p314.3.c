#include<stdio.h>
int func(int,int);
int main(void)
{
    int k=4,m=1,p1,p2;
    p1 = func(k,m);
    p2 = func(k,m);
    printf("%d,%d\n",p1,p2);
    return 0;
}

int func(int a,int b)
{
    static int m=0,i=2;
    i+=m+1;
    m=i+a+b;
    return m;
}
//在func函数中 m和i被定义为局部静态变量，下一次调用func函数时仍然保留上次运算后m和i的值。第一次调用后func中m=8，i=3，第二次调用时使用了上述的两个值，故输出的p2为17.
