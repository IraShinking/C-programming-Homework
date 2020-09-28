#include<stdio.h>

int main(void)
{
    int score,grade;
    printf("Enter the score in the hundred mark:");
    scanf("%d",&score);

    if (score<0||score>100)
        printf("Enter the right number.");
    else
    {
        grade = score /10;
        switch (grade)
        {
            case 10:
            case 9:printf("The score %d is in Grade A",score);break;
            case 8:printf("The score %d is in Grade B",score);break;
            case 7:printf("The score %d is in Grade C",score);break;
            case 6:printf("The score %d is in Grade D",score);break;
            default: printf("The score %d is in Grade E",score);break;


        }

}
return 0;
}
