#include<iostream>
using namespace std;
int main(void)
{
    for(int i=1;i<=3;i++)
    {
        for(int space=1;space<=i;i++)
        {
            cout<<"  ";
        }
        for(int star=1;star<=i;star++)
        {
            cout<<"*";
        }
    }
    return 0;
}