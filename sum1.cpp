#include<iostream>
using namespace std;
class sum1
{
private:
    int a,b;
public:
void sum()
{
   
    a=10;
    b=20;
    
}
void in()
{
    cin>>a>>b;
}
void print ()
{
    cout<<a+b;
}
};
int main(void)
{
    sum1 c;
    c.in();
    c.sum();
    c.print();

    return 0;
}

