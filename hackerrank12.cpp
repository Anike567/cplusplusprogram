#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
    string s,check;
    cin>>s;
    const string str="hackerrank";
    int len,k=0,i,a=0;
    len=s.size();
    for(k=0;k<len;k++)
    {
    for(i=a;i<len;i++)
    {
        if(str[k]==s[i])
        {
            check[k]=s[i];
            a=i;
            break;
        }

        
    }
    }
    if((str.compare(check))==0)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
}