#include<iostream>
using namespace std;

int sum(int ,int );
long sum(long ,long);
int main(void)
{
    cout<<sum(10,20)<<endl;
    cout<<sum(10,19);
    return 0;
}
int sum(int a ,int b)
{
    return (a+b);
}
long sum1(long a,long b)
{
    return (a+b);
}