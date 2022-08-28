#include<iostream >
using namespace std;
int sum(int);
int main(void)
{
    int add;
    add=sum(10);
    cout<<add;
    return 0;
}
int sum(int num)
{
    int static n=0;
    n= n+num;
     
    if(num>0)
    {
       sum(num-1); 
        
    }
    else
    {
        return n;
    }
    
}