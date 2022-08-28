#include<iostream>
#include<cstring>
using namespace std;
int chk(string s,int n)
{
    int a=0;
    string str="abcdefghijklmnopqrstuvwxyz";
    int len=str.size();
    for(int i=0;i<len;i++)
    {
      for(int j=0;j<n;j++)
      {
          if(str[i]==s[j])
          {
              a++;
          }
      }

    } 
  return a;
}
int main (void)
{
    int n;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        cout<<chk(s,n);
    }
    return 0;
}