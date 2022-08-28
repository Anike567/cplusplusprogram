#include<iostream>
using namespace std;
int main(void)
{
    int i,j,n;
    cout<<"enter the range of the series";
    cin>>n;
    for(j=0;j<(2*n)-1;j++)
    {
        for (i=0;i<j;i++)
        {
            cout<<"*";
        }
    }
    return
    0;
}