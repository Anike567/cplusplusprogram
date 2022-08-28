#include<stdio.h>
long int fact(int num);
int main()
{
    int num,factorial;
    printf("enter the number");
    scanf("%d",&num);
    factorial=fact(num);
    printf("the factorial is%ld",factorial);
    return 0;
}
long int fact(int num)
{
    if(num==0)
    {
        return 1;
    }
        return (num*fact(num-1));
}
