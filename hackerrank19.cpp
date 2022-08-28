#include<iostream>
#include<algorithm>
using namespace std;
int runnerup(int n,int arr[])
{
    int max=arr[0],temp;
    for(int i=1;i<n;i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
            temp=i;
        }
    }
    cout<<temp<<endl;
    
    arr[temp]=0;
    cout<<arr[temp];
    for(int i=1;i<n;i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        cout<<arr[i];
    }
    return max;
}
int main(void)
{
    int n;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<runnerup(n,arr);
    return 0;
}