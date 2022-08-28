#include<iostream>
#include<cstdlib>
using namespace std;
    int main(void){
        int n,arr[100000];
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int temp=0;
        cout<<temp;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int a=abs(arr[j]-arr[i]);
                cout<<a<<endl;
                
            }
        }
        cout<<temp;
        return 0;
    }
