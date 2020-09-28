#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
double inner_product (double a[],double b[],int n)
{
    int i;
    double sum;
    for(i=0; i<n; i++)
        sum+=a[i]*b[i];
    return sum;

}

int evaluate_position(char board[8][8])
{
    int i=0;
    int j=0;
    char c;
    int sum=0;
    for(i=0;i<8;i++)
        for(j=0;j<8;j++)
    {
        c = board[i][j];
        switch(c)
        {
            case 'Q':sum+=9;break;
            case 'R':sum+=5;break;
            case 'B':sum+=3;break;
            case 'N':sum+=3;break;
            case 'P':sum+=1;break;
            case 'K':sum+=1;break;
            case 'k':
            case 'p':sum-=1;break;
            case 'q':sum-=9;break;
            case 'r':sum-=5;break;
            case 'b':
            case 'n':sum-=3;break;
            default:break;
        }
    }
    return sum;
}

bool has_zero(int a[],int n)
{
    int i=0;
   bool  flag = true;
    if (a[i])//a[0]is not 0
       {
           for(i=1;i<n;i++)
            if(a[i]==0)
                flag = false;
        if(flag)//a[i] is not 0
            return false;
       }
    else {
            for(i=1;i<n;i++)
                if(a[i])//a[i]is not zero
                    flag = false;
            if(flag)//a[i] is all 0
                return true;
    }
}

double median(double x,double y,double z)
{
    if(x<=y)
    {
        if(y<=z)
            return y;
        else if(x>=z)
            return x;
        else return z;
    }
    else if (x>=z)
        return x;
    else if (y>=z)
        return z;
    else return y;
}
void pb(int n)
{
    if(n!=0)
    {
        pb(n/2);
        putchar('0'+n%2);

    }
}

int fact(int n)
{
    int fact;
    for(i=0;i<n+1;i++)
        fact *=i;
    return fact;
}

int gcd(int m,int n)
{

    if (n=0)
        return m;
    else gcd(n,m%n);
}


// I AM THE MAIN FUNCTION
int main(void)
{
    int n=0;
    printf("Enter a number:");
    scanf("%d",&n);
    pb(n);
    printf("\nIt's binary form is %d",n);
    return 0;
}


