#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex(void);
    void print()
    {
        cout <<a<<"+"<<b<<"i";
    }
};
complex::complex(void)
{
    a=10,b=20;
}
int main(void)
{
    complex b;
    b.print();
    return 0;
}
    





