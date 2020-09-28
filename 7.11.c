#include<stdio.h>
#define N 100
int main(void)
{
    char a[N]={0};
    char c,surname;
    int i;
    printf("Enter a first and last name:");
    c = getchar();
    while (c!=' ')
    {
        if (c<97)
            surname=c;
        c = getchar();
    }
    c = getchar();
    for (i=0;c!='\n';i++,c=getchar())
        a[i]=c;
    for(i=0;a[i]!=0;i++)
        printf("%c",a[i]);
    printf(", %c.",surname);
    return 0;

}
