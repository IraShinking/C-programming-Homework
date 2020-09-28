#include<stdio.h>
#include<stdlib.h>

int abs(int j);
int main(void)
{
    int hour1,min1,time;
    int flights1=8*60;
    int flights2=9*60+43;
    int flights3=11*60+19;
    int flights4=12*60+47;
    int flights5=14*60;
    int flights6=15*60+45;
    int flights7=(12+7)*60;
    int flights8=(9+12)*60+45;

    printf("Enter a 24-hour time:");
    scanf("%d:%d",&hour1,&min1);
    time =hour1*60+min1;

    /*if (time<flights1)
        printf("Cloest departure time is 8:00 a.m.,arriving at 10:16 a.m.");
    else if (time>flights8)
        printf("Cloest departure time is 9:45 p.m.,arriving at 11:58 p.m.");
    else
    */

    int minus1,minus2,minus3,minus4,minus5,minus6,minus7,minus8;
    minus1=abs(time-flights1);
    minus2=abs(time-flights2);
    minus3=abs(time-flights3);
    minus4=abs(time-flights4);
    minus5=abs(time-flights5);
    minus6=abs(time-flights6);
    minus7=abs(time-flights7);
    minus8=abs(time-flights8);


    int smallest,i;
    int min[8]={minus1,minus2,minus3,minus4,minus5,minus6,minus7,minus8};

    for (i=0,smallest=minus1;i<8;i++)
    {
        if(min[i]<smallest)
        smallest = min[i];
    }

    if (smallest == minus1)
        printf("Cloest departure time is 8:00 a.m.,arriving at 10:16 a.m.");
    else if (smallest == minus2)
        printf("Cloest departure time is 9:43 s.m.,arriving at 11:52 a.m.");
    else if (smallest == minus3)
        printf("Cloest departure time is 11:19 a.m.,arriving at 1:31 p.m.");
    else if (smallest == minus4)
        printf("Cloest departure time is 12:47 p.m.,arriving at 3:00 p.m.");
    else if (smallest == minus5)
        printf("Cloest departure time is 2:00 p.m.,arriving at 4:08 p.m.");
    else if (smallest == minus6)
        printf("Cloest departure time is 3:45 p.m.,arriving at 5:55 p.m.");
    else if (smallest == minus7)
        printf("Cloest departure time is 7:00 p.m.,arriving at 9:20 p.m.");
    else if (smallest == minus8)
        printf("Cloest departure time is 9:45 p.m.,arriving at 11:58 p.m.");

    /*switch(smallest)
    {   case minus1:printf("Cloest departure time is 8:00 a.m.,arriving at 10:16 a.m."); break;
        case minus2:printf("Cloest departure time is 9:43 s.m.,arriving at 11:52 a.m."); break;
        case minus3:printf("Cloest departure time is 11:19 a.m.,arriving at 1:31 p.m."); break;
        case minus4:printf("Cloest departure time is 12:47 p.m.,arriving at 3:00 p.m."); break;
        case minus5:printf("Cloest departure time is 2:00 p.m.,arriving at 4:08 p.m."); break;
        case minus6:printf("Cloest departure time is 3:45 p.m.,arriving at 5:55 p.m."); break;
        case minus7:printf("Cloest departure time is 7:00 p.m.,arriving at 9:20 p.m."); break;
        case minus8:printf("Cloest departure time is 9:45 p.m.,arriving at 11:58 p.m."); break;

    }*/
   return 0;
}
