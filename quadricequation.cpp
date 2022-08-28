#include<iostream>
#include<cmath>
using namespace std;
int roota(int a,int b,int c);
int rootb(int a,int b,int c);
int main(void)
{
    int a,b,c,root1,root2;
    cout<<"compare your equation with the standard form of quadric equatio ax^2+bx+c";
    cout<<"after comparison enter the value of a,b and c";
    cin>>a>>b>>c;
    root1=roota(a,b,c);
    root2=rootb(a,b,c);
    cout<<root1;
    cout<<root2;

    return 0;

}
int roota(int a,int b,int c)
{
    int r;
    r=-b+sqrt((b*b)-(4*a*c))/2*a;
    return r;
};
int rootb(int a,int b,int c)
{
     int r;
 r=-b-sqrt((b*b)-(4*a*c))/2*a;
 return r;
}
