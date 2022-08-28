#include<stdio.h>
int main(void)
{
    int num,i,j;
    int arr[15];
    printf("enter the number");
    scanf("%d",&num);
    i=0;
    while (num>0)
    {
    arr[i]=num%2;
    num=num/2;
    i++;
    }
    for(j=i;j<0;j--)
    {
        printf("%d",arr[j]);

    }

    return 0;
        
}