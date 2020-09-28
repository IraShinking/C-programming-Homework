#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>

bool test_extension(const char *file_name, const char *extension)
{
    bool dot=false;
    while(*file_name)
    {
        if(dot)
        {
            for(;*extension;extension++,file_name++)
                if(toupper(*extension) != toupper(*file_name))
                    return false;
        }
        if(*file_name=='.');
            dot =true;
    }
    return true;
}

void remove_filename(char *url)
{
    char *urx=url;
    int i=0;
    while(*url)
    {
        url++;
    }

    url--;
    while(*url)
    {
        if(*url=='/')
            *url='\0';
        url--;
    }

}
