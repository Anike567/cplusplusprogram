#include<iostream>
using namespace std;
int main(void)
{
    int i,j,k,a=1,b=5,l;
    for(i=0;i<4;i++)
    {
        for(j=0;j<i;j++)
        {
            for(k=b;k>0;k--)
            {
                cout<<" ";
            }
            cout<<a;
            a++;
        }
        cout<<endl;
        b--;
    }
    return 0;

}