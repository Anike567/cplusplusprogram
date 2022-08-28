#include<stdio.h>
#include<string.h>
struct student
{
    char name[30];
    int roll_no;
    int marks;
};
void display(char name[],int roll_no,int marks);
int main(void)
{
    struct student stu= {"marry",25,68};
    struct student stu2;
    strcpy(stu2.name,"marry");
    stu2.roll_no=13;
    stu2.marks=90;
    display(stu.name,stu.roll_no,stu.marks);
    display(stu2.name,stu2.roll_no,stu2.marks);
    return 0;
    
}
void display(char name[],int roll_no,int marks)
{
    printf("name-%s\t roll_no%d\t marks-%d\t",name,roll_no,marks);
}
