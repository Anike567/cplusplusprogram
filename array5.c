#include<stdio.h>
void func(int val[]);
int main(void)
{
    int arr[5]={1,2,3,4,5};
    int i;
    func(arr);
    for(i=0;i<5;i++)
    {
        printf("%5d",arr[i]);
    }
    return 0;
}
void func(int val[])
{
    int sum=0,i;
    for(i=0;i<5;i++)
    {
    val[i]=val[i]*val[i];
    sum=sum+val[i];
    }
    printf("%d",sum);
    printf("\n");
}