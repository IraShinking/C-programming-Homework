#include<stdio.h>
#define N 5
int main(void)
{
    int a[N]={0};
    int i,mean;
    int max,min;
    int maxI,minI;

    printf("Enter %d integer:",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }

    max = a[0];
    min = a[0];
    for (i=0;i<N;i++)
    {
        if (a[i]>max)
            {
                max = a[i];
                maxI=i;
            }
        if (a[i]<min)
        {
            min = a[i];
            minI=i;
        }
    }

    mean = a[maxI];
    a[maxI]=a[minI];
    a[minI]=mean;
    printf("The array now is:");
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}

