#include<iostream>
using namespace std;
int main(void)
{
    unsigned int arr[1000],n,i,j=0,max;
    cout<<"enter the number of the candle";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=arr[i];
    for(i=0;i<n;i++)
    
    {
        if(arr[i+1]>max)
        {
            max=arr[i+1];
        }

    }
    cout<<max<<endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]==max)
        {
            j++;
        }
    }
    cout<<j;
    return 0;
}