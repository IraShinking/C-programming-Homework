#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define N 10
void max_min(int a[],int n,int *max, int *min);

int main(void)
{
    int b[N],i,big,small;

    printf("Enter %d numbers: ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);

    }
    max_min(b,N,&big,&small);

    printf("Largest: %d\n");
    printf("Smallest: %d\n");

    return 0;

}

void max_min(int a[],int n,int *max,int *min)
{
    int i0;
    *max= *min =a[0];
    int *i=i0;
    for(i=a;i<a+n;i++)
    {
        if(*i>*max)
            *max=*i;
        else if(*i<*min)
            *min = *i;
    }
}
