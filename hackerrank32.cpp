#include<iostream>
using namespace std;
int main(void)
{
    int n,k;
    cin>>n>>k;
    int* arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp;
    cin>>temp;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    sum=sum-arr[k];
    sum=sum/2;
    if(temp>sum)
    {
        temp=temp-sum;
        cout<<temp;
    }
    else
    {
        cout<<"Bon Appetit";
    }
    return 0;
}