#include<stdio.h>
#include<stdlib.h>
#define RATE 0.053f
void print(float remain,float interest);
float compute(int season);
float interest,remain;

int main(void)
{
    int n;
    printf("Enter the remain:");
    scanf("%f",&remain);
    printf("Enter the total season:");
    scanf("%d",&n);
    compute(n);
    return 0;
}

float compute(int season)
{
    int i,j;
    float remainBefore;
    if (season ==1)
    {
        interest = remain * RATE;
        remain = remain + interest;
    }
    if (season > 1)
    {
        remainBefore = compute(season-1);
        interest = remainBefore*RATE;
        remain = remainBefore+interest;
    }
    print(remain,interest);
    return remain;

}

void print(float remain,float interest)
{
    printf("\t%f\t%f\n",remain,interest);
}
