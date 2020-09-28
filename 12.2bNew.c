#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 100

int main(void)
{
    char a[SIZE]={'\0'};
    char *p=&a[0];
    char *q;
    char c;
    printf("Enter a message:");
    while((c=getchar())!='\n')
    {
        if(((c<91)&&(c>64))||((c<123)&&(c>96)))
           {
               *(p++)=toupper(c);

           }
    }


   for(q=a;p>a;q++)
    {
        if((*(--p))!=(*q))
        {
            printf("\nNot a palindrome.");
            printf("\n%c %c",*(p),*q);
            exit(0);
        }
    }

    printf("\nPalindrome.");
    return 0;
}
