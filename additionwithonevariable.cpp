#include<iostream>
using namespace std;
int main(void){
    int arr[5],b=5;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<b;i++){
        int count =0;
        for(int j=0;j<5;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        cout<<"frequency of"<<arr[i]<<"="<<count<<endl;
        int a=0;
        for(int k=0;k<5;k++){
            if( arr[k]==arr[i]){
                continue;
            }
            else{
                arr[a]=arr[k];
                a++;
            }
        }
        b=sizeof(arr);
    }
    return 0;
}
