#include<stdio.h>
void check(int num);
int main(void)
{
    int arr[5],i;
    printf("enter the element of the array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        check(arr[i]);
    }
    return 0;
}
void check(int num)
{
    if(num%2==0)
    {
        printf(" elememt is even");
    }
    else
    {
        printf(" element is odd");
    }
    
}