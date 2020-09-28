#include<stdio.h>
int main(void)
{
    printf("%ld\n",(unsigned long)sizeof(int));
    printf("%ld\n",(unsigned long)sizeof(short));
    printf("%ld\n",(unsigned long)sizeof(long));
    printf("%ld\n",(unsigned long)sizeof(float));
    printf("%ld\n",(unsigned long)sizeof (double));
    printf("%ld",(unsigned long)sizeof(long double));
    return 0;
}
