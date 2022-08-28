#include<iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int D,d,a,b,c;
        cin>>D>>d>>a>>b>>c;
        int tod=d*D;
        if(tod>=42)
        {
            cout<<c<<endl;
        }
        else if(tod>=21)
        {
            cout<<b<<endl;
        }
        else if(tod>=10)
        {
            cout<<a<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}