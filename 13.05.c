#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<ctype.h>

void capitalize(char str[])
{
    int i=0;
    int cr;
    for(i=0;str[i]!='\0';i++)
    {
        cr = str[i];
        str[i]=toupper(cr);
    }
}

void capitalize_new(char *s)
{
    while(*s)
        *s++=toupper(*s);
}
