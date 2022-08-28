#include<iostream>
using namespace std;
int main(void)
{
    int i,j,k,l,a=5,b=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=a;j++)
        {
            cout<<" ";
        }
        a--;
        for(k=1;k<=i;k++)
        {
            cout<<b<<" ";
            b++;
        }
        cout<<endl;
    }
    return 0;
}