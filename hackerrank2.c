#include<stdio.h>
int main(void)
{
    int i,arr[100],n;
    printf("enter the no of element in of the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%-2d",arr[i]);
    }
    return 0;

}