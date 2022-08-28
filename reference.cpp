#include<iostream>
using namespace std;
int main(void)
{
    int i=10;
    int &j=i;
    i++;
    j++;
    cout<<i<<endl<<j;
    return 0;
}