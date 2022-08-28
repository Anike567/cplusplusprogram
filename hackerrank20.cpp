#include<iostream>
using namespace std;
int runnerup(int arr[],int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        if(temp<arr[i])
        {
            temp=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==temp)
        {
            arr[i]=0;
        }
    }
    int temp1=arr[0];
    for(int i=1;i<n;i++)
    {
        if (arr[i]>temp1)
        {
            temp1=arr[i];
        }
    }
    return temp1;
}
int main(void)
{
    int arr[10],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<runnerup(arr,n);
    return 0;
}