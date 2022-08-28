#include<iostream>
using namespace std;
int main(void)
{
    int i,j,a=5;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=a;j++)
        {
            cout<<j;
        }
        a--;
        cout<<endl;
    }
    return 0;
}