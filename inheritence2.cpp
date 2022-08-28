#include<iostream>
using namespace std;
class show
{
    public:
     show()
    {
        cout<<"constructor"<<endl;
    }
};
class newshow:public show
{
    public:
    newshow()
    {
        cout<<"another constructor"<<endl;
    }
};
int main(void)
{
    // show s;
    newshow a;
    return 0;
}