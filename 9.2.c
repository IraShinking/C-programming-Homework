#include<stdio.h>
#include<stdlib.h>
float Tax(int income);
int main(void)
{
    int income;
    float tax;
    printf("Enter the income:");
    scanf("%d",&income);
    tax=Tax(income);
    printf("\nThe tax you need to pay is:%.3f",tax);

    return 0;
}

float Tax(int income)
{
    float t;
    if (income<750)
        t = 0.01f*income;
    else if (income<2250)
        t = 7.50f+(income-750)*0.02f;
    else if(income<3750)
        t = 37.5f+(income-2250)*0.03f;
    else if(income < 5250)
        t = 82.5f+(income-3750)*0.04f;
    else if(income<7000)
        t = 142.5f+(income-5250)*0.05f;
    else t = 230.0f+(income-7000)*0.06f;

    return t;
}
