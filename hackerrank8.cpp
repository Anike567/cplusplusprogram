#include<iostream>
using namespace std;
int main(void)
{
    int arr[100];
    int n,num;
    cout<<"enter the number of the student";
    cin>>n; 
    cout<<"enter the grade";
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
         if(arr[i]%10>5)
         {
             num=arr[i];
             num=num-num%5;
             num=num+10;
             if(num-arr[i]<3)
             {
                 arr[i]=num;
             }

         }
         else
         {
             if(arr[i]%10<5)
             {
                 num=arr[i];
                 num=num-num%5;
                 if(arr[i]-num)
                 {
                     arr[i]=num;
                 }
             }
         }
         
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    
    return 0;

}