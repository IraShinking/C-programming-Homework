#include<stdio.h>
int digit (int n, int k);
int main (void)
{
    int n;
    int k;
    printf("Enter a number and the digit which you want to get:");
    scanf("%d %d",&n,&k);
    k= num_digit(n,k);
    printf("The digit is:%d",k);
    return 0;
}

int num_digit(int n,int k)
{

    int j;
    int i=0;
    while(n>0)
    {
        j =n%10;
        n = n/10;
        i++;
        if(i==k)
            return j;
    }
    if (n==0)
        return 0;
}
