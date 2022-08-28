#include<bits/stdc++.h>
using namespace std;
double median(int a[],int n)
{
    sort(a,a+n);
    if(n%2!=0)
    {
        return (double)a[n/2];
    }
}
int main(void)
{
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int last=d,initial=0,b[d], count=0;
    while (last<n)  
    {
        int temp=0;
        for(int i=initial;i<last;i++)
        {
            b[temp]=a[i];
            temp++;
        }
        if(a[last]>=2*median(b,d))
        {
            count++;
        }
        last++;
        initial++;
    }
    cout<<count;
    return 0;
}