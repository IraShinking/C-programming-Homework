#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#define SIZE 100

int main(void)
{
    int i=0;
    int j=0;
    char a[SIZE]={'\0'};
    char c;
    char *p;
    char *q;
    p=&a[0];
    q=&a[0];
    printf("Enter a message:");
    while((c=getchar())!='\n')
    {
        if(((c<91)&&(c>64))||((c<123)&&(c>96)))
           {
               *(p++)=toupper(c);

           }
    }


   for(q=&a[0];p>&a[0];q++)
    {

        if(*(--p)!=*q)
        {
            printf("\nNot a palindrome.");
            exit(0);
        }
    }

    printf("\nPalindrome.");
    return 0;
}
