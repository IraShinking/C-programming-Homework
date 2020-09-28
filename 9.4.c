#include<stdio.h>
#include<ctype.h>
#include<bool.h>
#define N 26
void read_word(int counts[26]);
bool equal_array(int counts1[26],int counts2[26]);
int main(void)
{
    int i,j;
    int a[N]={0};
    char c;
    printf("Enter first word:");
    while((c=getchar())!='\n')
    {
        c=toupper(c);
        j = (int)(c-'A');
        a[j]+=1;
    }
    printf("\nEnter second word:");
    while((c=getchar())!='\n')
    {
        c=toupper(c);
        j=(int)(c-'A');
        a[j]-=1;
    }
    for(i=0;i<N;i++)
    {
        if(a[i]!=0)
            break;
    }
    if(i<N)
        printf("The words are not anagrams.");
    else printf("The words are anagrams.");


    return 0;
}
void read_word(int counts[26]);
bool equal_array(int counts1[26],int counts2[26]);
