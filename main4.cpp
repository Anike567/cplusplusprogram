#include<iostream>
#include<conio.h>
using namespace std;
class box
{
    int height ,bidth,length;
    public:
    box(void)
    {
        length=10;
        bidth=20;
        height=30;
    }
    public:
     box operator +(const box&obj)
    {
        box b4;
         b4.length=length+obj.length;
         b4.bidth=bidth+obj.bidth;
         b4.height=height+obj.height;
     }
    void print ()
    {
        cout<<length<<bidth<<height;
    }
};
int main()
{
    box b3;
    box b1(1,2,3);
    
    b3.print();
    
    return 0;
}
