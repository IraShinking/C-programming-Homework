#include<stdio.h>
#include<stdbool.h>
#define SIZE 100

int main(void)
{
    char a[SIZE]={'\0'};
    char c;
    int *p;
    printf("Enter a message:");

    for(p=&a[0];((c=getchar())!='\n')&&(p<&a[SIZE]);p++)
        *p=c;
    printf("\nReversal is:");
    for(p;p>=&a[0];p--)
        printf("%c",*p);
    return 0;
}
