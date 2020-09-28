#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define SIZE 100
char *q;

int fun(char *s)
{
    char *p;
    int i=0;
    int j=0;
    for(p=s;q>&s[0];p++)
    {
        if(*(--q)!=*p)
            return 0;
    }
  return 1;


}

int main(void)
{
    char s[SIZE]={'\0'};
    printf("Enter a message:");
    int turn=0;
    for(q=s;q<s+SIZE;q++)
    {
        scanf("%c",q);
        if(*q=='\n')
        {
            *q='\0';
            break;
        }
    }
    turn = fun(s);
    if(turn)
        printf("\nYES");
    else printf("\nNO");
    return 0;
}
