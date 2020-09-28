#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define P 80
#define A 65
int main(void)
{
    int hour,min;
    char c;
    printf("Enter a 12-hour time:");
    scanf("%d:%d",&hour,&min);
    c = getchar();
    while(c==' ')
    {
        c = getchar();
    }
    c = toupper(c);
    switch (c)
    {
        case A:break;
        case P:hour=hour+12;break;
        default:break;
    }
    printf("Equivalent 24-hour time:%d:%d",hour,min);
    return 0;
}
