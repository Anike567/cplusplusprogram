#include<iostream>
#include<conio.h>
using namespace std;
class test
{
    private:
    int num;
    public:
    test()
    {
        num=8;
    }
    void operator ++()
    {
        num=num+2;
    }
    void print()
    {
        cout<<"the count is"<<num;
    }

};
int main()
{
class t;
++t ;
t.print();
getch();
return 0;
}
