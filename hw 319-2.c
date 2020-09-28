#include<stdio.h>
#define StudentN 10

struct student
{
    int num;
    char name[8];
    char sex;
    int age;
    double grade;
};

int main(void)
{
    int i,j;
    printf("Before the sorting:\n");
    struct student std[StudentN]={
    {101,"Zhang",'M',19,95.6},
    {102,"Wang",'F',18,92.2},
    {103,"Zhao",'M',19,85.7},
    {104,"Li",'M',20,96.3},
    {105,"Gao",'M',19,90.2},
    {106,"Lin",'M',18,91.2},
    {107,"Ma",'F',18,98.7},
    {108,"Zhen",'F',21,88.7},
    {109,"Xu",'M',19,90.1},
    {110,"Mao",'F',22,94.1}
   };
    struct student *ps[StudentN];
    struct student t;
    for(i=0;i<StudentN;i++)
    {
        ps[i]=&std[i];//can't use *ps[i]=std[i] here cause we don't know where the pointer Ps had pointed to
    }
    for(i=0;i<StudentN;i++)
    {
        printf("\t%d\t""%s\t""%c\t""%d\t""%.2lf\n",ps[i]->num,std[i].name,std[i].sex,std[i].age,std[i].grade);

    }

    for(j=0;j<StudentN-1;j++)
        for(i=0;i<StudentN-j-1;i++)
            if(std[i].grade>std[i+1].grade)
        {
            t = std[i];
            std[i]=std[i+1];
            std[i+1]=t;
        }

    printf("After sorting:\n");
       for(i=0;i<StudentN;i++)
    {
        printf("\t%d\t""%s\t""%c\t""%d\t""%.2lf\n",std[i].num,std[i].name,std[i].sex,std[i].age,std[i].grade);
    }

    return 0;

}
