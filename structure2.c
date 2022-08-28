#include<stdio.h>
struct student
{
    char name[30];
    int roll_no;
    int marks;
};
void display(struct student *);
void inc_marks(struct student *);
int main(void)
{
    struct student stu1={"marry",12,87};
    struct student stu2={"john",13,90};
    inc_marks(&stu1);
    inc_marks(&stu2);
    display(&stu1);
    display(&stu2);
    return 0;
}
void inc_marks(struct student *stuptr)
{
    (stuptr->marks) ++;
}
void display(struct student * stuptr)
{
    printf("name=%s\t",stuptr->name);
    printf("rollno=%d\t",stuptr->roll_no);
    printf("marks=%d\t",stuptr->marks);
}
