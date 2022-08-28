#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int chk(string s)
{
   int n=s.size(),temp=0;
   for(int i=1;i<n;i++)
   {
       if(s[i-1]=='A'&&s[i]=='B'||s[i-1]=='B'&&s[i]=='A')
       {
           temp=temp+0;
       }
       else
       {
           temp++;
       }
       
   }
   return temp;

}
int main(void)
{
    int n;
    string s;
    cin>>n;
    while (n--)
    {
        cin>>s;
        cout<<chk(s);
    }
    return 0;
}