#include<iostream>
using namespace std;
int main(void)
{
    for(int i=0;i<8;i=i+2)
    {
        for(int j=i;j<=4;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}