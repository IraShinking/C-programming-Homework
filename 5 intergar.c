#include<stdio.h>
int main(void)
{
    int i1,i2,i3,i4,i5;
    int max1,min1,max2,min2;
    int biggest,smallest;
    printf("Enter five integer:");
    scanf("%d%d%d%d%d",&i1,&i2,&i3,&i4,&i5);
    if (i1>i2)
    {
        max1=i1;
        min1=i2;
    }
    else {max1=i2;min1=i1;}

    if(i3>i4)
    {
        max2=i3;
        min2=i4;
    }
    else {max2=i4;min2=i3;}

    if (max1>=max2)
        biggest = max1;
    else biggest = max2;

    if (min1<=min2)
        smallest = min1;
    else smallest = min2;

    if(i5>biggest)
        biggest = i5;
    else if (i5<smallest)
        smallest = i5;

   printf("The biggest number is %d",biggest);
   printf("The smallest number is %d",smallest);
}
