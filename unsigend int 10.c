#include<stdio.h>
int main(void)
{
    unsigned int n,m,d,s=0,j=0;
    int i=0;
    printf("Enter a integer:");
    scanf("%u",&n);
    while (n>0)
    {
        m = n%10;
        if (m%2==0)
            s = s*10+m;
        n = n/10;
    }

    while(s)
    {
        i=s%10;
        j=j*10+i;
        s=s/10;
    }

    printf("%u",j);
    return 0;



}
