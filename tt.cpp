#include<iostream>
using namespace std;
int main(void)
{
    for(int j=0;j<3;++j)
    {
    for(int i=0;i<=j;i++)
    {
        for(int k=3;k>0;k--)
        {
            cout<<" ";
        }
        cout<<"*";
    }
    cout<<endl;
    }

    return 0;
}