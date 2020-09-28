#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define SIZE 100

int main(void)
{
    char a[SIZE]={'\0'};
    char c;
    int i;
    printf("Enter a message:");

    for(i=0;((c=getchar())!='\n')&&(i<SIZE);i++)
        a[i]=c;
    printf("\nReversal is:");
    for(i;i>=0;i--)
        printf("%c",a[i]);
    return 0;
}
