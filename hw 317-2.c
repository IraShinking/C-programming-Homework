#include<stdio.h>
int main(void)
{
    int i,*p,s=0,a[5]={5,6,7,8,9};
    p=a;
    for(i=0;i<5;i++,p++)
    {
        s+=*p;
    }
    printf("\ns=%d",s);
    return 0;

}
/*程序功能：对数组内数字求和
进入循环体前 p指向数组a的第一个元素
每增加一次p p的地址增加4位 指向数组a下一个元素
退出循环后 p指向数组a末尾之后的下一个位置
我掌握了啦啦啦



*/
