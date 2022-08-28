#include<iostream>
using namespace std;
class wall
{
    int length,bidth;
    public:
    wall(int l,int b)
    {
        length=l;
        bidth=b;
    }
    int area(void)
    {
        return length*bidth;
    }
};
int main(void)
{
    int length,bidth;
    cout<<"enter the length and biddth of the wall";
    cin>>length>>bidth;
    wall b1(length,bidth);
    cout<< "are of wall is"<<b1.area();
    return 0;



}