#include<iostream>
using namespace std;
int main(void)
{
    int i,a=1,sum,b=0;
    cout<<b<<a;
    for(i=0;i<10;i++)
    {
        sum=a+b;
        cout<<sum<<"\t";
        b=a;
        a=sum;


    }
}