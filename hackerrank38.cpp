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
    int a[]={20,30,40};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<median(a,n);
    return 0;
}