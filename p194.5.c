#include<stdio.h>
#define N 999
int main(void)
{
    int i,j;
    char a[N]={'\0'};
    int position[N]={0};
    char max;
    printf("Enter message:");
    max = a[0];
    for(i=0;(a[i]=getchar())!='\n';i++)
    {
        if (a[i]>max)
            max  = a[i];
    }
    printf("The character has the biggest ASCII value is:%c\nAnd it's positions are:'",max);
    for(i=0,j=0;a[i]!='\0';i++)
       {
            if(a[i]==max)
            {
            	j++;
            	printf("%d,",i+1);
			}
                
        }
    printf("\nIt has exited %d times.",j);

    return 0;
}
