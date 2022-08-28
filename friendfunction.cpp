#include<iostream>
using namespace std;
class sample
{
    int a,b;
    public :
    void getvalue(void)
    {
        a=25;
        b=50;
    }
    friend int mean(sample s);
};
int mean(sample s)
{
    return( s.a+s.b)/2;
}
int main(void)
{
    sample x;
    x.getvalue();
    cout<<"mean="<<mean(x)<<"\n";
}
