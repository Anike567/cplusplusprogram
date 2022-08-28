#include<iostream>
using namespace std;
int main(void)
{
    string s;
    cin>>s;
    int n=s.size();
    if(s[n-2]=='P')
    {
        if(s[0]!=1&&s[1]!=2){
            s[0]=s[0]+1;
            s[1]=s[1]+2;
        }
    }
    else
    {
     
        if(s[n-2]=='A')
        {
            if(s[0]!=0){
                s[0]='0';
                s[1]='0';
            }
        }
    }
    cout<<s;
    return 0;
}