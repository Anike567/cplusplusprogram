#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
    string s;
    const char str[4]="sos";
    cin>>s;
    int i,len,wrong=0,k=0;
    len=s.size();
    for(i=0;i<len;i++)
    {
        if(s[i]==str[k])
        {
            k++;
            wrong=wrong+0;
        }
        else
        {
            wrong=wrong+1;
            k++;
        }
        if(k==3)
        {
            k=0;
        }
        
    }
    cout<<wrong;
    return 0;

}