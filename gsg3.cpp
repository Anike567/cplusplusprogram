#include<iostream>
using namespace std;
int findkthminimum(int n,int arr[],int k)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr[k-1];
}
int main(void)
{
    int n,arr[10],k;
    cout<<"enter the no of elements";
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<findkthminimum(n,arr,k);
    return 0;
}