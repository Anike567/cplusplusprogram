# include<stdio.h>
// void binary(int num);
int main (void)
{
    int num,num1,num2=1,sum=0;
    printf("enter the number");
    scanf("%d",&num);
    printf ("%c",num1);
    while(num!=0)
    {
        num1=num%2;
        sum=sum+(num1*num2);
        num2=num2*10;
        num=num/2;

    }
    printf("%d\n",sum);

   
    return 0;
}