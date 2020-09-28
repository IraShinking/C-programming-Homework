#include<stdio.h>
#include<stdlib.h>
#define N 10
int main(void)
{
    long n;
    long m;
    int digit;
    int a[N]={0};
    int i;

    printf("Enter a number:");
    scanf("%ld",&m);
    if (m<=0)
    {
        printf("Please enter again.");
        exit(0);
    }

    for(;m>0;)
    {
        n = m;
    for(i=0;i<10;i++)
        a[i]=0;
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

    printf("\nEnter a number:");
    scanf("%ld",&m);
    }



    return 0;

}
