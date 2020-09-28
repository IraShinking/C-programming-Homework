#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define END_Length 4


bool check_length(char *s)
{
    int i=0;
    while(*s)
    {
        ++i;
        s++;
    }
    if(i==END_Length)
        return false;
    else return true;
}


int main(void)
{
    char smallest_word[21]={'\0'};
    char largest_word[21]={'\0'};
    char word[21]={'\0'};
    bool first_word =false;



   do
    {
        printf("Enter word:");
        scanf("%s",word);

        if(!first_word)
        {
            strcpy(smallest_word,word);
            strcpy(largest_word,word);
            first_word=true;
        }
        if(strcmp(smallest_word,word)>0)
            strcpy(smallest_word,word);
        else if (strcmp(word,largest_word)>0)
            strcpy(largest_word,word);

    } while(check_length(word));
    printf("\nSmallest word:%s",smallest_word);
    printf("\nLargest word:%s",largest_word);


}
