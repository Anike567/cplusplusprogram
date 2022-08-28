#include<stdio.h>
int main()
{
    int arr[10];
    int i,large,small;
    printf("enter the element of the array ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);

    }
    large=small=arr[0];
    for(i=0;i<10;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        
        }
        if(small>arr[i])
        {
            small=arr[i];
        }
    }
    printf("the largest number in array is=%d",large);
    printf("the smallest number in array=%d",small);
    
    return 0;

}