#include<iostream>
#define long long ll;
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==(i+1))
            continue;
        else{
            swap(a[i],a[a[i]-1]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
