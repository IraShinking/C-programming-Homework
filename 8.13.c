#include<stdio.h>
#define N 20
int main(void)
{
    char firstName[N]={'\0'};
    char lastName[N]={'\0'};
    char c,surname;
    int i=0;
    printf("Enter a first and last name:");
    c=getchar();
    do{
            firstName[i]=c;
            i++;

    }while((c=getchar())!=' ');

    for(i=0;(c=getchar())!='\n';i++)
    {
        lastName[i]=c;
    }

    printf("You entered the name:");
    for(i=0;lastName[i]!='\0';i++)
        printf("%c",lastName[i]);

    printf(", ");
    for(i=0;firstName[i]<97;i++)
        printf("%c.",firstName[i]);

    /*while (c!=' ')
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
    printf(", %c.",surname);*/
    return 0;

}
