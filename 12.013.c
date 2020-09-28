#include<stdio.h>
#include<stdlib.h>

#define N 10N

double ident[N][N];

void ident_mattrix(double ident[][])
{
    int row,col;
    for(row=0;row<N;row++)
        for(col=0;col<N;col++)
            if(row==col)
            ident[row][col]=1.0;
            else ident[row][col]=0.0;
}

void ident_mattrix_1(double ident[][])
{
    int i;
    double *p;
    p=ident;
    i=0;
    for(p=ident;p<N*N;p++,i++)
    {
        if(i%N==0)
        {
            *p=1.0;
        }
        else *p=0.0;

    }
}

void ident_mattrix_2(double ident[][])
{
    int i;
    double *p;
    p = ident;
    i=0;
    for(p=ident;p<N*N;p++)
    {
        if(i==N)
        {
            *p=1.0;
            i=0;
        }
        else {
            *p=0.0;
            i++;
        }
    }
}
