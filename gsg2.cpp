#include<bits/stdc++.h>
using namespace std;
int minoperations(int arr[],int n)
{
    int ans=accumulate(arr,arr+n,0)-n;
    for(int x=1; ;x++)
    {
        int curpow=1,curcost=0;
        for(int i=0;i<n;i++)
        {
            curcost+=abs(arr[i]-curpow);
            curpow*=x;
            if(curpow/x>ans+arr[n-1])
            {
                break;
            }
            ans=min(ans,curcost);
        }
    }
    return ans;
}
int main(void)
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<minoperations(arr,n);
    return 0;
}