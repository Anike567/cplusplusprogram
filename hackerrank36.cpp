#include<iostream>
using namespace std;
int main(void)
{
    int mat[3][3],count=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            mat[i][j]=count++;
        }
    }
    int a[9];int coun=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[coun]=mat[i][j];
            coun++;
        }

    }
    for(int i=0;i<9;i++)
    {
        cout<<a[i]<<" ";
        if((i+1)%3==0)
        {
            cout<<endl;
        }
    }
    return 0;
}