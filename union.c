#include<stdio.h>
union result
{
    int marks;
    char grade;
    float percentage;

} res ;
res.marks=90;
printf("marks=%d\n",res.marks);