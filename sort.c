#include<stdio.h>
void sort(int arr[]);
int main(void)
{
    int arr[10],i,j,num;
    printf("enter the element of the array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
   sort(arr);

    return 0;

}
void sort(int arr[])
{
    int j,i,num;
     for(j=0;j<10;j++)
    {
        for(i=0;i<10;i++)
        {
            if(arr[i]<arr[i+1])
            {
                num=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=num;
            }
        }
    }
    printf("sorted array is");
    for(i=10;i>=0;i--)
    {
    printf("%d\n",arr[i]);
    }
}