#include<iostream>
using namespace std;
int main(void)
{
    int n,q;
    cin>>n>>q;
    int* a[n];
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a[i]=(int*)malloc(temp*sizeof(int));
        for(int j=0;j<temp;j++)
        {
            cin>>a[i][j];
        }
    }
    while(q--)
    {
        int c,b;
        cin>>c>>b;
        cout<<a[c][b]<<endl;
    }
    return 0;
}