#include<iostream>
using namespace std;
int main(void)
{
    int value=0,a,b;
    string s="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string str="abcdefghijklmnopqrstuvwxyz";
    for(int i=a;i<s.size();i++)
    {
        for(int j=b;i<str.size();j++)
        {
            if(str[j]==s[i])
            {
                value++;
                b=i;
                break;
            }
        }
        a=i;
        cout<<value;
    }
    cout<<value;
    return 0;
}