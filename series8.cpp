#include<iostream>
using namespace std;
int main(void)
{
    int i,j,k,l=0,a;
    for(i=1;i<=5 ;i++)
    {
        for(j=1;j<=i;j++)
        {
            l++;
            cout<<l;
            
        }
        for(k=l-1;k>=1;k--)
        {
           cout<<k; 
        }
        cout<<endl;

    }
    return 0;
}