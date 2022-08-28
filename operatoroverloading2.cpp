#include<iostream>
using namespace std;
class complex
{
    private:
    int real,image;
    public:
    complex(int r=0,int i=0)
    {
        real=r;
        image=i;
    }
    complex operator +(complex const &obj)
    {
        complex res;
        res.real=real+obj.image;
        res.image=image+obj.image;
        return res;
    }
    void print()
    {
        cout<<real<<"+"<<image<<"i";
    }
    
};
int main(void)
{
    complex c1(20,30),c2(30,40);
    complex c3=c1+c2;
    c3.print();
}