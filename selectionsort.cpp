#include<iostream>
#include<chrono>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(j==n)break;
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
        cout<<arr[i]<<" ";
        _sleep(1000);
    }
}