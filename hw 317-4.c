#include<stdio.h>
#define SIZE 100



void reverse(int a[],int n)
{
  int *p;
  int *q;
  int t=0;
  for(q=a,p=&a[n-1];q<a+n/2;q++,p--)
  {
      t=*p;
      *p=*q;
      *q=t;
  }

}

int main(void)
{
    int a[SIZE]={0};
    printf("Enter 10 numbers:");
    int n=10;
    int *k;
    for(k=a;k<a+n;k++)
        scanf("%d",k);
    reverse(a,n);
    for(k=a;k<a+n;k++)
        printf("%d ",*k);
    return 0;

}
