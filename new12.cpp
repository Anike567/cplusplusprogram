#include<iostream>
using namespace std;
void comparetriplet(int arr[],int arr1[])
{
  int a=0;int b=0;
  for(int j=0;j<3;j++)
  {
      if(arr[j]==arr1[j])
      {
          a=a+0;
          b=b+0;
      }
      if(arr[j]>arr[j])
      {
          a=a+1;
      }
      if(arr1[j]>arr[j])
      {   
          b=b+1;
      }
  }
  if(a>=b)
  {
      cout<<a<<b;
  }
  if(a<b)
  {
      cout<<b<<" "<<a;
  }  
}
int main(void)
{
    int arr[3],arr1[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
        
    }
    for(int j=0;j<3;j++)
    {
        cin>>arr1[j];
    }
    comparetriplet(arr,arr1);
}