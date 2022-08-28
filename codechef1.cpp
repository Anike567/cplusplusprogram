#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
    int x;
    cin>>x;
    float y,bal;
    cin>>y;
    bal=y;
    
    if(y>(x+0.5)&&x%5==0)
    {
        bal=y-(x+0.50);
    }
    cout<<fixed<<setprecision(2)<<bal;
    return 0;
}