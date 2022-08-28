#include<iostream>
using namespace std;
int main(void)
{
    int i,j,k,num;
    for (i=0;i<3;i++)
    {
        for(j=0;j<=i;j++)
        { 
            for(k=3;k>i+1;k--)
            {
             cout<<" ";  
            }
            cout<<" * ";
        }
        cout <<endl;
    }
}