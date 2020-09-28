#include<stdio.h>
#define N 10
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
int roll_num(void);

int main(void)
{
    int i=0,j=0,alpha=0;
    int column=0,row=0;
    int direct;
    int try[N][N]={0};
    int fall;
    char a[N][N];
    bool b[N][N]={false};

    generate_random_walk(a);
    a[0][0]='A';
    b[0][0]=true;
    i=0;
    j=0;

while(true)
{
    direct=roll_num();
    row=i;
    column=j;
    switch(direct)
        {
            case 0:row=i-1;break;
            case 1:column=j-1;break;
            case 2:column=j+1;break;
            case 3:row=i+1;break;
            default:break;
        }
    if((b[row][column]==false)&&(row<N)&&(row>=0)&&(column<N)&&(column>=0))
    {
        alpha++;
        a[row][column]='A'+alpha;
        b[row][column]=true;
        i=row;
        j=column;
    }
    else
    {try[i][j]+=1;
    if(try[i][j]==4)
        break;
    else continue;}
}

    print_array(a);

    return 0;
}

int roll_num(void)
{
    int r;
    srand((unsigned)time(NULL));
    r =rand();
    r=r%4;
    return r;
}

void generate_random_walk(char walk[10][10])
{
    int i;
    int j;
     for(i=0;i<N;i++)
        for(j=0;j<N;j++)
    {
        walk[i][j]='.';
    }
}
void print_array(char walk[10][10])
{
   int i=0;
   int j=0;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
    {
        printf("%c ",walk[i][j]);
        if(j!=0&&j%9==0)
            printf("\n");
    }

}

