#include<stdio.h>
int check(int x,int y,int n)
{
    if((x>=0)&&(x<=(n-1))&&(y>=0)&&(y<=(n-1)))
        return 1;
    else return 0;
}

int main(void)
{
    int x;
    int y;
    int n;
    int flag;
    printf("Enter x,y,n:");
    scanf("%d,%d,%d",&x,&y,&n);
    flag=check(x,y,n);
    printf("%d",flag);

    return 0;
}

