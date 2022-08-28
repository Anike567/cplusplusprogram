#include<iostream>
using namespace std;
int main(void)
{
    int i,j;
    char alphabets='A',input;
    cin>>input;
    for(i=1;i<=(input-'A'+1);++i)
    {
        for(j=1;j<=i;j++)
        {
            cout<<alphabets;
        }
        cout<<endl;
        ++alphabets;
    }
    cout<<(input-'A')+1;
    return 0;
}