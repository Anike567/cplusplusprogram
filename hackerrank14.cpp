#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
    int value=0,a=0,k=0,l=0;
    string s="qmExzBIJmdELxyOFWv LOCmefk TwPhargKSPEqSxzveiun ";
    char temp[100];
    // getline(cin,s);
    string str="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<=str.size();i++)
    {
        for(int j=0;j<=s.size();j++)
        {
            if(str[i]==s[j])
            {
                value++;
                temp[l]=s[j];
                l++;
                break;
            }
        }
    }
    while(temp[l]!='\0')
    {
        for(int m=0;m<=strlen(temp);m++)
        {
            if(m==l)
            {
                continue;
            }
            else
            {   
            if(temp[l]==temp[m])
            {
                value--;
            }
            }
        }
        l++;
    }
    cout<<value;
    // cout<<temp;
    return 0;

}