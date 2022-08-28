#include<iostream>
using namespace std;
int main(void)
{
    int height[100],k,n;
    cout<<"enter the number of the participant";
    cin>>n;
    cout<<"enter the value of k";
    cin>>k;
    cout<<"enter the height of the hurdle";
    for(int i=0;i<n;i++)
    {
        cin>>height[i];
    }
    int max=height[0];
    for(int i=1;i<n;i++)
    {
        if(height[i]>max)
        {
            max=height[i];
        }
       
       
    }
      max=max-k;
     cout<<endl<<max;
    return 0;
}
