#include<iostream>
using namespace std;
int main(void)
{
    int i,j,k,a=3;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=a;j++)
        {
            cout<<" ";
        }
        a--;
        for(k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}