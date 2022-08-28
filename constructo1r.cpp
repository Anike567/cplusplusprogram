#include<iostream>
using namespace std;
class point
{
    int x,y,sum;
    public:
    point(int a, int b)
    {
        x=a;
        y=b;
        sum=x+y;
    }
    public:
    void show()
    {
        cout<< sum;
    }
};
int main(void)
{
    point p1(10,20);
    p1.show();

}