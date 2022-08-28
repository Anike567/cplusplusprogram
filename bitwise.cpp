#include<iostream>
using namespace std;
int findsingle(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        res ^=arr[i];
        // cout<<res<<endl;
    }
    return res;
}
int main(void){
    int arr[]={12,12,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    int a=findsingle(arr,n);
    printf("%d",a);
    return 0;
}