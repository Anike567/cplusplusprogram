#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    int i=1,count=0;
    while(i<p)
    {
        count++;
        i=i+2;
    }
    int temp=n,count1=0;
    if(n-p==1)
    {
        count1=0;
    }
    else
    {
        while (temp>p)
        {
            count1++;
            temp=temp-2;
        }
        
    }
    if(count<count1)
    {
        cout<<count;
    }
    else
    {
        cout<<count1;
    }
    return 0;
}