#include<stdio.h>
#define HOUR 24
#define DAY 30
int main(void)
{
    int a[DAY][HOUR]={0};
    int i=0;
    int j;
    float sum=0.0f;
    float avgD[DAY]={0.0f};//Store the average temperature each day

    for(i=0;i<DAY;i++)
    {
        printf("Enter the temperature each hour in this day:");
        for(j=0;j<HOUR;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<DAY;i++)
    {
        for(j=0;j<HOUR;j++)
            avgD[i]+=a[i][j];
        avgD[i]/=24.0f;
        sum +=avgD[i];
    }
    sum /=30.0f;
    printf("\nThe average temperatue this month is:%.2f",sum);
    printf("\nThe average temperature each day is:\n");
    for(i=0;i<DAY;i++)
    {
        printf("%.2f",avgD[i]);
        if (i%5==0)
            printf("\n");
    }


    return 0;

}
