#include<iostream>
using namespace std;
int main(void)
{
    int n,m;
    cin>>n>>m;
    int* a=(int*)malloc(n*sizeof(int));
    int* b=(int*)malloc(m*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    
    int count=0;
    int x=a[n-1];
    while(x<b[0])
    {
        int temp=0;
        for(int i=0;i<n;i++)
        {
            if(x%a[i]!=0)
            {
                temp=1;
                break;
            }
        }
        cout<<temp<<endl;
        if(temp==0)
        {
            for(int i=0;i<m;i++)
            {
                if(b[i]%x!=0)
                {
                    temp=1;
                }
            }
        }
        if(temp==0)
        {
            count++;
        }
        x++;
    }
    cout<<count;
    return 0;
}