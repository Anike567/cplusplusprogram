#include<iostream >
#include<conio.h>
using  namespace std;
class cube
{
    private:
    int length,bidth,height,a;
    public:
    cube(int l,int b,int h)
    {
        length=l;
        bidth=b;
        height=h;
    }
    int area()
    {
       
        a=length*bidth*height;
        return a;
    }
    void print()
    {
        cout<<a;
    }
};
int main(void)
{
    int l,b,h;
    cout<<"eneter the vallue of length ,bidth and height";
    cin>>l>>b>>h;
    cout<<l<<b<<h;
    cube b1(l,b,h);
    b1.print();
    return 0;
}