#include<iostream>
using namespace std;
int main(void)
{
    int limit,n,m;
    cin>>limit>>n>>m;
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
    int max=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]+b[j]>max&&a[i]+b[j]<=limit)
            {
                max=a[i]+b[j];
            }
        }
    }
    cout<<max;
    return 0;
}