#include<iostream>
using namespace std;
class ani
{
    public:
    int a=4;
    void show()
    {
        cout<<a<<endl;
    }
};
class newani: public ani
{
    int b;
    public:
    void sum()
    {
        b=a+4;
    }
    void show()
    {
        cout<<b<<endl;
    }
};
int main(void)
{
    newani a;
    a.sum();
    a.show();
    ani b;
    b.show();
    return 0;
}