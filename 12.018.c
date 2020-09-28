#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main(void)
{

}

int evaluate_position(char board[8][8])
{
    char *p;

    char c;
    int sum=0;
   for(p=&board[0][0];p<=&board[8][8];p++)
   {


        switch(*p)
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

int evaluate_position_(char board[8][8])
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
