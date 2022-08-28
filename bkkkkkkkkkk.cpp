#include<iostream>
using namespace std;
class box
{
    public:
    int length,bidth,height;
    box(int l,int b,int h)
    {
        length=l;
        bidth=b;
        height=h;
    }
        box operator+(const box &obj)
        {
           box b4;
           b4.length= b1.length+obj.length;
           b4.height= b1.heigth+obj.height;
           b4.bidth= b1.bidth+obj.bidth;
        }
        void print()
        {
            cout <<height<<length<<bidth;
        }
   

};
int main(void)
{
    box b1(5,6,7);
    box b2(7,8,9);
    box b3;
    b3=b1+b2;
    b3.print();
    return 0;
}