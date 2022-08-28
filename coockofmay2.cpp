#include<iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while (t--)
    {
        int G,P,a[10];
        cin>>G>>P;
        for(int i=0;i<10;i++)
        {
            cin>>a[i];
        }
        int count=0;
        for(int i=G;i<10;i++)
        {
            count+=a[i];

        }
        auto day=[&](int people)
        {
            return people/P+(people%P!=0);
        };
        int min=day((count+1));
        int max=day((count+a[G-1]));
        cout<<min<<" "<<max;
    }
    return 0;
}