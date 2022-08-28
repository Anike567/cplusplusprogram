#include <iostream>
using namespace std;
int main(void)
{
    int i,j,k,a=0;
    for(k=0;k<2;k++)
    {
    for(i=0;i<=2;i++)
    {
         cout<<i;
        for(j=0;j<=a;j++)
        {
        cout<<"*";
         }
         cout<<endl;
       a=i;
    }
    }
    return 0;
    
    
    
    
    
}