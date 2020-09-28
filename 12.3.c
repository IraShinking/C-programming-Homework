#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define SIZE 100

int main(void)
{
    char a[SIZE]={'\0'};
    char c;
    int *p;
    printf("Enter a message:");

    for(p=a;((c=getchar())!='\n')&&(<a+SIZE);p++)
        *p=c;
    printf("\nReversal is:");
    for(p;p>=a;p--)
        printf("%c",*p);
    return 0;
}
