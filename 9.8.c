#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#define Num 5
//count from 0

int rool_dice(void);
bool play_game(void);
int main(void)
{
    bool flag;
    int win=0;
    int lose=0;
    char c;

    flag = play_game();
    if(flag)
    {
       	win++;
		printf("\nYou win!");
	}
    else{
		lose++;
		printf("\nYou lose!");
	}

    printf("\n\nPlay again?");
    c = toupper(getchar());
    getchar();//remember to drop the enter
	printf("\n");
	while(c=='Y')
	{
		flag = play_game();
		if(flag)
                {
                	win++;
					printf("\nYou win!");
				}
            else{
					lose++;
					printf("\nYou lose!");
				}
            printf("\n\nPlay again?");
            c = toupper(getchar());
            getchar();
            printf("\n");
	}
   	if (c=='N')
    {
        printf("\nWins:%d\tLosses:%d",win,lose);
    }
	

    return 0;
}

int rool_dice(void)
{
    int point1=0;
    int point2=0;
    int pointSum=0;
    point1=(rand()%Num);
    point2=(rand()%Num);
    pointSum = point1+point2+2;
    return pointSum;

}

bool play_game(void)
{
    int point=0;
    int pointB=0;
    point = rool_dice();
    printf("You rolled:%d",point);
    if ((point==7)||(point==11))
        return true;
    else if((point==2)||(point==3)||(point==11))
        return false;
    else
        {
            printf("\nYour point is:%d",point);
            pointB = point;
            point = rool_dice();
            while((point!=7)&&(point!=pointB))
            {
                printf("\nYou rolled:%d",point);
                point = rool_dice();
            }
            printf("\nYou rolled:%d",point);
            if(point==7)
                return false;
            else if(point == pointB)return true;

    }

}
