#include<stdio.h>
#define N 80
int main(void)
{
    int n;
    char ch;
    char c;
    char a[N]={'\0'};
    int i=0;
    printf("Enter message to be encrypted:");
    while((c=getchar())!='\n')
    {
        a[i]=c;
        i++;
    }

    printf("\nEnter shift amount(1-25):");
    scanf("%d",&n);
    printf("Encrypted message:");
    for(i=0;a[i]!='\0';i++)
    {
        ch = a[i];
        if((a[i]<123)&&(a[i]>96))
            a[i]=((ch-'a')+n)%26+'a';
        else if((a[i]<91)&&(a[i]>64))
            a[i]=((ch-'A')+n)%26+'A';
        printf("%c",a[i]);
    }
    return 0;
}
