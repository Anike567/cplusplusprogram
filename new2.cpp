#include<iostream>
using namespace std;
class count
{
    public:
    int value;
    public:
   count(int v)
   {
       value=v;
   }
   void operator++()
   {
       ++ value;
   }
    void print()
    {
        cout <<value;
    }
    

};
int main(void)
{
    int n;
    cin>>n;
    count c1(n);
    ++c1;
    c1.print();
    return 0;

}