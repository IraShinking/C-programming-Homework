#include<stdio.h>
int main(void)
{
    int a;
    int b;
    int c;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a>=0&&a<=9)
        printf("The number %d has 1 digit.",a);
    else if (a>=10 && a<=99)
        printf("The number %d has 2 digits.",a);
    else if(a<=999)
        printf("The number %d has 3 digits.",a);
    else printf("The number %d has 4 gigits.");
    return 0;
}
