#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
    int i,k,l,a=4,b=2,c=1,d;
    for(i=1;i<=6;i=i+2)
    {
        for(k=1;k<=a;k++)
        {
            cout<<" ";
        }
        a--;
        for(l=1;l<=i;l++)
        {
            cout<<b;
            b++;
            d=b;
        }
        
        b--;
        for(int c=(b-1);c>=d;c--)
        {
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}