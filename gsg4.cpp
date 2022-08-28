#include<iostream>
using namespace std;
int isvalid(int n,int arr[][9])
{
    for (int i = 0; i <9; i++)
    {
        for(int j=0;j<9;j++)
        {
            
        }
    }
    
}
int main(void)
{
    int arr[9][9];
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cin>>arr[i][j];
        }
    }
    int a=isvalid(9,arr);
    if(a==1)
    {
        cout<<"valid";
    }
    else
    {
        cout<<"not valid";
    }
    return 0;
    
}