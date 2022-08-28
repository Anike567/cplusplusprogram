#include<stdio.h>
int main(void)
{
    int num,i=0;
    scanf("%d",&num);
    while(num!=0)
    {
        i++;
        num=num/10;
    }
    printf("%d",i);
    return 0;
}