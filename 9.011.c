#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 100
float compute_GPA(char grades[],int n)
{
    int i;
    int sum=0;
    float avg;
    for(i=0;i<n;i++)
    {
        switch (grades[i])
        {
            case 'A':sum+=4;break;
            case 'B':sum+=3;break;
            case 'C':sum+=2;break;
            case 'D':sum+=1;break;
            case 'F':sum+=0;break;
            default:break;
        }
    }
    avg = ((float)sum)/n;
    return avg;
}
int main(void)
{
    float avg;
    int n=0;
    int i;
    char c;
    char grade;
    char grades[N]={'\0'};
    printf("Enter the students grade:");
    for(i=0;(c=toupper(getchar()))!='\n';)
        {
            if((c=='A')||(c=='B')||(c=='C')||(c=='D')||(c=='F'))
         {
             grades[i]=c;
             n++;
             i++;
         }
        }
    avg = compute_GPA(grades,n);
    printf("\n%f\n",avg);
    switch ((int)avg)
    {
        case 4:grade='A';break;
        case 3:grade='B';break;
        case 2:grade ='C';break;
        case 1:grade ='D';break;
        case 0:grade ='F';break;
        default:break;
    }
    printf("The average grade is: %c",grade);
    return 0;
}
