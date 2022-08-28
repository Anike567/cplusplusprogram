#include<iostream>
using namespace std;
int main(void)
{
    int arr[100][100]={0};
    for(auto i=0;i<100;i++)
    {
        cout<<arr[i]<<" ";
        if((i+1)%3==0)
        {
            cout<<endl;
        }
    }
}