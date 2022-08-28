#include<stdio.h>
int search(int arr[],int num);
int main(void)
{
    int arr[10],i,num,index;
    printf("enter element to be searched");
    scanf("%d",&num);
    printf("enter the element of the array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    index=search(arr,num);
    if(index==1)
    {
        printf("element is found");
    }
    else
    {
        printf("element not found");
    }
    return 0;
    
}
int search(int arr[],int num)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(arr[i]==num);
        {
        return 1;
        }
    }
}