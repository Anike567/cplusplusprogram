#include<iostream>
using namespace std;
int* grading(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    return arr;
}
int main(void)
{
    int *ptr;
    int n,arr[60];
    ptr=grading(arr,n);
    cout<<ptr;
}