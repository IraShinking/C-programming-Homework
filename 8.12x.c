#include<stdio.h>
#include<ctype.h>
#define N 26

int main(void)
{
    int i=0,j=0;
    char c;
    int sum=0;
    const int value[N]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    printf("Enter a word:");
    while((c=toupper(getchar()))!='\n')
    {
        sum+=value[c-65];

    }
    printf("Scrabble value is:%d",sum);
    return 0;

}
