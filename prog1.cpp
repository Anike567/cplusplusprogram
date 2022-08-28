#include<iostream>
using namespace std;
int main(void){
    int max=10,visited=-1;
    int arr[max];
    int fr[max];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        int count=1;
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                count++;
                fr[j]=visited;
            }
        }
        if(fr[i]!=visited){
            fr[i]=count;
        }
    }
    for(int i=0;i<5;i++){
        if(fr[i]!=visited){
        cout<<"frequency of"<<arr[i]<<"="<<fr[i]<<endl;}
    }
    return 0;
}