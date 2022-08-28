#include<iostream>
using namespace std;
int main(void)
{
    string s="saveChangesInTheEditor";
    cout<<"enter the string";
    // cin >>s;
    int n=0;
    int count=1;
    while (s[n]!='\0')
    {
        n++;
        if(s[n]=='A'||s[n]=='B'||s[n]=='C'||s[n]=='D'||s[n]=='E'||s[n]=='F'||s[n]=='G'||s[n]=='H'||s[n]=='I'||s[n]=='J'||s[n]=='K'||s[n]=='L'||s[n]=='M'||s[n]=='N'||s[n]=='O'||s[n]=='P'||s[n]=='Q'||s[n]=='R'||s[n]=='S'||s[n]=='T'||s[n]=='U'||s[n]=='V'||s[n]=='W'||s[n]=='X'||s[n]=='Y'||s[n]=='Z')
        {
            count++;
        }
    }
    cout<<count;
    
}