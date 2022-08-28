#include<stdio.h>
struct student
{
    char name[30];
    int roll_no;
    int marks;
};
void accept(struct student arr[]);
int main(void)
{
    struct student stu[5];
     int i;
     accept(stu);
 for(i=0;i<5;i++)
 {
     printf("%s\n",stu[i].name);
     printf("%d\n",stu[i].roll_no);
     printf("%d\n",stu[i].marks);
 }

    return 0;

}
void accept(struct student stu[])
{
    int i;
for(i=0;i<5;i++)
{
    printf("enter the  student name");
    scanf("%s",stu[i].name);
    printf("enter the roll no of student");
    scanf("%d",&stu[i].roll_no);
    printf("enter the student marks");
    scanf ("%d",&stu[i].marks);
}
}






















