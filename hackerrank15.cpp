#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
string chk(string s)
{
  int n=s.size();
  string r=s;
  reverse(r.begin(),r.end());
  for(int i=1;i<n;i++)
  {
      int n1=s[i]-s[i-1];
      int n2=r[i]-r[i-1];
      if(abs(n1)!=abs(n2))
      {
          return "not funny";
      }
      else return "funny";
  }  
}
string isFunny(string s)
{
    return chk(s);
}
int main(void)
{
    string s1;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s1;
        cout<<isFunny(s1);
    }
    return 0;

}