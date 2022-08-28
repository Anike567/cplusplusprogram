#include<iostream>
using namespace std;
int main(void)
{
    int n,c=0;
    cin>>n;
    int** a= new int*[n];
    int* arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        a[i]=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=++c;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                arr[i]=a[i][j];
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}