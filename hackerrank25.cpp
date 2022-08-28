#include<iostream>
using namespace std;
int main(void){
    int max=100;
    int arr[max],n,d;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>arr[i];        
    }
    for(int i=d;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<d;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}