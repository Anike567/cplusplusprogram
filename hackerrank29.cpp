#include<iostream>
using namespace std;
int main(void)
{
    int n,arr[1000];
    cin>>n;
    string s[1000];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int q;
    cin>>q;
    string qu[1000];
    for(int i=0;i<q;i++)
    {
        cin>>qu[i];
    }
    for(int i=0;i<q;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<q;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(qu[i]==s[j])
            {
                arr[i]++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}