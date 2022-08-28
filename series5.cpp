#include<iostream>
using namespace std;
int main(void)
{
    int a=5;
    for(int j=1;j<=5;j++)
    {
    for(int i=a;i>0;i--)
    {
        cout<<"*";
    }
    a--;
    cout<<endl;
    }
    return 0;
}