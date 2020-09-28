#include<stdio.h>
#define N 5
int main(void)
{
    int a[N][N]={0};
    int i,j;
    int row_sum,column_sum;
    int row[N]={0};
    int column[N]={0};
    printf("Enter row 1 :   ");
    for (i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            {
                scanf("%d",&a[i][j]);
            }
            if (i<N-1)
            printf("\nEnter row %d :   ",i+2);
    }

    printf("\n Row totals:");
    for(i=0;i<N;i++)
        {for(j=0;j<N;j++)
            {row[i]+=a[i][j];
            }
        printf("%d ",row[i]);
        }
    printf("\n Column totals:");
    for(j=0;j<N;j++)
        {for(i=0;i<N;i++)
            {column[j]+=a[i][j];
            }
        printf("%d ",column[j]);
        }



    return 0;


}
