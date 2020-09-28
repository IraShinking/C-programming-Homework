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

    printf("Enter a message:");
    while((c=getchar())!='\n')
    {
        if(((c<91)&&(c>64))||((c<123)&&(c>96)))
           {
               a[i++]=toupper(c);

           }
    }

    j=0;
   for(j=0;i>0;j++)
    {
        if(a[--i]!=a[j])
        {
            printf("\nNot a palindrome.");
            exit(0);
        }
    }

    printf("\nPalindrome.");
    return 0;
}
