#include<stdio.h>
#include<conio.h>
struct student 
{
    char name[30];
    int roll_no;
    int total;
    int marks[6];
    char grade;
};
void display(struct student arr[]);
void calculate(struct student arr[]);
void sort (struct student arr[]);
int main(void)
{
    struct student stu[2];
    int i,j;
    for(i=0;i<2;i++)
    {
        printf("enter the %d student name",i);
        scanf("%s",stu[i].name);
        printf("enter the %d student rollno",i);
        scanf("%d",&stu[i].roll_no);
      
        for(j=0;j<6;j++)
        {
            printf("enter the %d marks of the %d student",i,j);
            scanf("%d",&stu[i].marks[j]);
        }
    }
    calculate(stu);
    sort(stu);
    display(stu);
    return 0;
}
void calculate(struct student stu[])
{
    int i,j;
  for(i=0;i<2;i++)
  {
      for(j=1;j<=6;j++)
      {
      stu[i].total=stu[i].total+stu[i].marks[j];
      }
      if(stu[i].total>500)
        stu[i].grade='A';
        else if(stu[i].total>400)
        stu[i].grade='b';
        else if(stu[i].total>250)
        stu[i].grade='c';
        else
        stu[i].grade='d';

  }  
}
void sort (struct student stu[])
{
    int temp,i,j;
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<2;j++)
        {
            if(stu[i].total>stu[j].total)
            {
                temp=stu[i].total;
                stu[i].total=stu[j].total;
                stu[j].total=temp;
            }
        }
    }
}
void display(struct student stu[])
{
    int i;
    for (i=0;i<2;i++)
    {
        printf("roll no-%d\t",stu[i].roll_no);
        printf("name-%s\t",stu[i].name);
        printf ("grade-%s\t",stu[i].grade);
        printf("totaal-%d\t",stu[i].total);
    }
}
