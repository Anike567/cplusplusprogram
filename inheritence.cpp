#include<iostream>
using namespace std;
class index
{
    protected:
    int count ;
    public:
    index ()
    {
        count =0;
    }
    void display()
    {
        cout<<count<<endl;
    }
    void operator ++()
    {
        count ++;
    }
};
class newindex : public index{
    public:
    void operator --()
    {
        count --;
    }

};
int main(void)
{
    newindex i;
    ++i;
    i.display();
    --i;
    i.display();
    return 0;
}