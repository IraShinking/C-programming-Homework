#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define SIZE 100

int strcmp(char *s1,char *s2)
{
    char *p;
    char *q;
    int result=0;
    for(p=s1.q=s2;(p<s1+SIZE)&&(q<s2+SIZE);p++,q++)
    {
        if(int(*q)<int(*p))//s2>s1 return negative value
        {
            return -1;
        }
        else if(int(*q)>int(*p))//s1>s2 return positive value
        {
            return 1;
        }
    }
    return 0;
}
