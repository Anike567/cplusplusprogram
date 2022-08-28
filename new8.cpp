#include<iostream>
using namespace std;
int main(void)
{
    int i=0;
    if(i<5)
    {
        goto sum;
        i++;
    }
    return 0;
    sum:
    {
        int x=5;
        x=x+1;
        cout<<x;
    }
    return 0;
}