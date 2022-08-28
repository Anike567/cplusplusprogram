#include<iostream>
using namespace std;
int main(void)
{
    int m,n;
    cin>>m>>n;
    string str[m],st[n];
    for(int i=0;i<m;i++)
    {
        cin>>str[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>st[i];
    }
    bool a=true;
    for(int i=0;i<n;i++)
    {
        if(a)
        {
            for(int j=i;j<m;j++)
            {
                if(st[i]==str[j])
                {
                    a=true;
                }
                else{
                a=false;
                }
            }   
        }
        
    }
    if(a)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0; 
}
