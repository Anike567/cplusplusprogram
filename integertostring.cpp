#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;
string itos(int i)
{
    stringstream s;
    s<<i;
    return s.str();
}
int main(void)
{
    int i=127;
    string ss=itos(i);
    const char*p=ss.c_str();
    cout<<ss<<" "<<p<<"\n";
    return 0;
}