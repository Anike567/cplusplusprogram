#include<stdio.h>
int main(void)
{
    int num,arr[1000],i=0,j,a=0;
    scanf("%d",&num);
    while (num>0)
    {
        arr[i]=num%2;
        num=num/2;
        i=i+1;
    }
    for(j=0;j<i;j++)
    {
        if(arr[j]==arr[j+1]==1)
        {
            a=2+a;
             printf("%d\n",a);
             a=a+1;

        }
        
    }
    if(arr[0]==1)
    {
    printf("1");
    }
        
    return 0;
    
}