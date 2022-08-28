#include<iostream>
using namespace std;
#define ll long long
ll power(ll x,ll y,ll p)
{
    ll res=1;
    x=x%p;
    if(x==0) return 0;
    while(y>0)
    {
        if(y&1)
           res=(res*x)%p;
        y=y>>1;
        x=(x*x)%p;
    }
    return res;
}
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll p=1000000007;
        cout<<power(2,(n-1),p)<<endl;
    }
    return 0;
}