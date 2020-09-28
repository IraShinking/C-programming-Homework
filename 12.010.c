#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


int *find_middle(int a[],int n)
{
    return &a[n/2];
}

int *find_middle_1(int *a,int n)
{
  int *p;
  int *q;
  q=a+n/2;
  return q;

}

int find_largest(int a[],int n)
{
    int i,max;
    max = a[0];
    for(i=1;i<n;i++)
        if(a[i]>max)
            max = a[i];
    return max;
}

int find_largest_1(int a[],int n)
{
    int *p;
    int *q;
    q=&a[0];
    p=a;
    for(p=a;p<a+n;p++)
        if(*p>*q)
            *q=*p;
    return *q;
}
