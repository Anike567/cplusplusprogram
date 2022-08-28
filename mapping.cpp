#include<iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int first[26]={0},second[26]={0},count=0;
        cin>>s;
        if(s.size()%2!=0)
        {
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<s.size()/2;i++)
            {
                first[s[i]-'a']++;
            } 
            for(int i=s.size()-1;i>s.size()/2;i--)
            {
                first[s[i]-'a']--;
            } 
            for(int i=0;i<26;i++)
            {
                count+=abs(first[i]);
            }  
            cout<<count<<endl;
        }
        
    }
}