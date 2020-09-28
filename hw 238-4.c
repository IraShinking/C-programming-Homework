#include<stdio.h>
#include<stdlib.h>

#define N 3

void reverse_mattrix(int *a,int n)
{
    int *pA;
    int (*pB)[n];
    int *p;
    int b[n][n];
    int i=0;
    for(i=0;i<n;i++)
    {
        for(pA=a[i],pB=&b[i];(pA<(a[i]+n))&&(pB<&b[n]);pA++,pB++)
    {
        (*pB)[i]=*pA;

    }
    }
    for(*p=a;p<n*n;p++,pB++)
    {
        *p=*pB;
    }

}



