#include<stdio.h>
int main(void)
{
    int num,arr[1000],i=0,j,a=0,b=0;
    printf("enter the number ");
    scanf("%d",&num);
    while (num>0)
    {
        arr[i]=num%2;
        num=num/2;
        i=i+1;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
    printf("\n");
    for(j=0;j<i;j++)
    {
        if(arr[j]==1)
        {
            a=a+1;
        }
        else
        {
            b=b+1;
        }
        
    }
    printf("no of oneis=%d\n",a);
    printf("and the no of zeros is=%d",b);
    return 0;
    
}