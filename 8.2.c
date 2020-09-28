#include<stdio.h>
#define N 10
int main(void)
{
    long n;
    int digit;
    int a[N]={0};

    printf("Enter a number:");
    scanf("%ld",&n);
    while(n>0)
    {
        digit = n%10;
        a[digit]+=1;
        n /=10;
    }
    printf("Digit:\t    ");
    for (digit=0;digit<10;digit++)
    {
        printf("%3d",digit);
    }
    printf("\nOccurrences:");
    for(digit=0;digit<10;digit++)
    {
        printf("%3d",a[digit]);
    }
    return 0;

}
