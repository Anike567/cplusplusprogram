#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    int n,k,arr[100];
    cin>>n;
    for(k=0;k<n;k++)
     {
        string s;
        string str ="hackerrank";
        cin>>s;
        
        int len=s.size();
        cout<<len;
        int i,j,a=0,check=0;
        for(i=0;i<=str.size();i++)
        {
        for(j=a;j<s.size();j++)
        {
            if(str[i]==s[j])
            {
                check++;
                cout<<check;
                a=j+1;
                break;
            }
        }
        }
        
        if(check==10)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

     }
    return 0;
}