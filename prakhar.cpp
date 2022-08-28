#include<iostream>
using namespace std;
int longdividsion(string num,int division)
{
    int n=0,temp,value=num[n]-48;
    cout<<value;
    while(num[n]!='\0')
    {
        n++;
        if(division>value)
        {
        value=(value*10)+num[n]-48;
        }
    
    else
    {
        temp=value%division;
        value=value/division;
        value=(value*10)+num[n]-48;

    }
    }
    return temp;
    
}
int main(void)
{
    string num;
    int div;
    cout<<"enter the number ";
    cin>>num;
    cout<<"enter the diviser";
    cin>>div;
    cout<<longdividsion(num,div);
    return 0;
}