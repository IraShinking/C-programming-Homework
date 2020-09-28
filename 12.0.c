#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>

bool search(const int *a,int n,int key)
{
    int *p;
    p=a;
    for(p=a;p<a+n;p++)
        if (key ==*p)
         return true;
        else return false;
}

double inner_product(const double *a,const double *b,int n)
{
    int *p;
    int *q;
    p=a;
    q=b;
    double result=0.0;
    for(p=a,q=b;(p<a+n)&&(q<b+n);p++,q++)
    {
        result =result + (*p)*(*q);
    }
    return result;
}

void find_two_largest(const int *a,int n,int *largest,int *second_largest)
{
    int *p;
    *largest =*a;
    *second_largest = *a;
    for(p=a;p<a+n;p++)
    {
        if(*p>*largest)
            *largest=*p;
        else if(*p>*second_largest)
            *second_largest=*p;
    }
}

void print_row_temp(const int *a,int i,int n)
{
    int *p;
    for(p=a[i];p<a[i]+n;p++)
        printf("%d",*p);
}
int find_largest(const int *a,int i,int n)
{

    int *p;
    int largest=0;
    for(p=a[i];p<a[i]+n;p++)
        if(*p>largest)
            largest =*p;

    return largest;
}
void print_day_temp(const int *a,int n)
{
    int *p;
    int i;
    int largest;
    for(i=0;i<7;i++)
    {
       largest=find_largest(a,i,n);
       printf("The largest temperature in this day is:%d",largest);

    }
}
int main (void)
{
    int temperatures[7][24]={0};
    bool findB;
    findB=search(temperatures,7*24,32);


}
int sum_two_dimensional_array(const int *a,int n,int LEN)
{
    int *p,*q,sum=0;
    *q=0;
    for(p=a[0];p<a[0]+n;p++,q++)
    {
        if(*q<LEN)
            sum+=*p;
        else *q=0;
    }
}






