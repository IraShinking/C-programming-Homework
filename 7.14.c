#include<stdio.h>
#include<math.h>
#define epilson 0.00001f
int main(void)
{
    float x,y=1,i,j=1,yo;
    printf("Enter a positive number:");
    scanf("%f",&x);
    do{
        yo = y;
        i=x/y;
        j = (y+x/y)/2;
        printf("%f\t%f\t%f\t\n",y,i,j);
        y = j;
    }while(fabs((double)yo-y)>=epilson*y);
    printf("Square root:%f",y);
    return 0;
}
