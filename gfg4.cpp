#include<iostream>
#include<algorithm>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+= i*arr[i]-(n-i-1)*arr[i];
    }
    cout<<sum;

}