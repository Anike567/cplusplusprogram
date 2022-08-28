#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int size=1;
    int a[500];
    a[0]=1;
    for(int i=2;i<=n;i++)
    {
        int carry=0;
        for(int  j=0;j<size;j++)
        {
            int product=a[j]*i+carry;
            a[j]=product%10;
            carry=product/10;
        }
        while(carry)
        {
            a[size]=carry%10;
            carry=carry/10;
            size++;
        }
    
    }
    for(int i=size-1;i>=0;i--)
    {
        cout<<a[i];
    }
    return 0;
}