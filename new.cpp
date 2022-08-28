#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
    int n,k,arr[100];
    cin>>n;
    for(k=0;k<n;k++)
    {
        char s[10000],str[]="hackerrank";
         cin>>s;
        int i,j,a=0,check=1;
        for(i=0;i<strlen(str);i++)
        {
        for(j=a;j<strlen(s);j++)
        {
            if(str[i]==s[j])
            {
                check++;
                a=j;
                break;
            }
        }
        }
        
        if(check==11)
        {
            cout<<"yes";
        }
        else
        {
            cout<<"no";
        }

    }
    return 0;
}