#include<stdio.h>

int main(void)
{
    int i,s1=0,s2=0,s3=0,s4=0,*p,a[5]={1,2,3,4,5};
    p=a;
    for(i=0;i<5;i++)
        s1+=p[i];
    for(i=0;i<5;i++)
        s2+=*(p+i);
    for(p=a;p<a+5;p++)
        s3+=*p;
    p=a;
    for(i=0;i<5;i++)
        s4+=*p++;
    printf("\n s1=%d,s2=%d,s3=%d,s4=%d",s1,s2,s3,s4);
    return 0;
}
