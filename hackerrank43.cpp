// this program is based on hashing
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int m,n;
    cin>>m>>n;
    map<string,int>magzines;
    map<string ,int>notes;
    for(int i=0;i<m;i++)
    {
        string word;
        cin>>word;
        magzines[word]++;
    }
    for(int i=0;i<n;i++)
    {
        string word;
        cin>>word;
        notes[word]++;
    }
    map<string,int>::iterator it;
    bool succes=1;
    for(it=notes.begin();it!=notes.end();it++)
    {
        if(magzines[it->first]<it->second)
        {
            succes=0;
            break;
        }
    }
    if(succes)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}