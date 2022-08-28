#include <iostream>
using namespace std;
int main(void)
{
    string str;
    string str1;
    cin >> str >> str1;
    int first[26] = {0}, second[26] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        first[str[i] - 'a']++;
    }
    for (int i = 0; i < str1.size(); i++)
    {
        second[str1[i] - 'a']++;
    }
    bool ans=true;
    for(int i=0;i<26;i++)
    {
        if(second[i]==first[i])
        {
            continue;
        }
        else{
            ans=false;
        }
    }
    if(ans)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}