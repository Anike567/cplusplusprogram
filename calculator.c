#include<stdio.h.>
void sum(int num1,int num2);
void sub(int num1,int num2);
void mul(int num1,int num2);
void div(int num1,int num2);
int main(void)
{
    int num1,num2;
    char operator;
    printf("enter the first number");
    scanf("%d",&num1);
    printf("enter what u want to do");
    scanf("%s",&operator);
    printf("enter the second number");
    scanf("%d",&num2);
    switch(operator)
    {
    case '+':
    {
    sum(num1,num2);
    break;
    }
    case '-':
    {
    sub(num1,num2);
    break;
    }
    case '*':
    mul(num1,num2);
    break;
    case '/':
    div(num1,num2);
    break;
    return 0;

    }
}
void sum(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    printf("%d",sum);
}
void sub(int num1,int num2)
{
    int sub;
    sub=num1-num2;
    printf("%d",sub);
}
void mul(int num1,int num2)
{
    int mul;
    mul=num1*num2;
    printf("%d",mul);
}
void div(int num1,int num2)
{
    int div;
    div=num1/num2;
    printf("%d",div);
}
