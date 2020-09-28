#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int read_line_0(char str[], int n)
{
    int ch,i=0;

    while((ch=getchar())!='\n')
        if(i<n)
            str[i++]=ch;
    str[i]='\0';
    return i;
}

int read_line_1(char str[], int n)
{
    int ch,i=0;
    bool blank = false;

    while((ch=getchar())!='\n')
    {
        if (ch!=' ')
            blank = true;
        if(blank)
            str[i++]=ch;
    }

    str[i]='\0';
    return i;
}

int read_line_2(char str[], int n)
{
    int ch,i=0;

    while((ch=getchar())!='\n')
        if(i<n&&isspace(ch))
            str[i++]=ch;
    str[i]='\0';
    return i;
}

int read_line_3(char str[], int n)
{
    int ch,i=0;

    while((ch=getchar())!='\n')
        if(i<n-1)
            str[i++]=ch;
    str[i]='\n';
    str[i+1]='\0';
    return i;
}

int read_line_4(char str[], int n)
{
    int ch,i=0;
    char strm[n];
    int j;
    while((ch=getchar())!='\n')
        if(i<n)
            str[i++]=ch;
    str[i]='\0';

    for(j=0;j<n;j++)
        strm[n]='\0';
    while((ch=getchar())!='\n')
        if(j<n)
            strm[j++]=ch;

    return i;
}
