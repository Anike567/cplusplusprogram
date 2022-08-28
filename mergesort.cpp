#include<iostream>
#include<chrono>
using namespace std;
void merge(int arr[],int l,int mid,int r){
    int i=l;
    int k=l;
    int j=mid+1;
    int b[r];
    while(i<=mid && j<=r){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            k++;
            i++;
        }
        else{
            b[k]=arr[j];
            k++;
            j++;
        }
    }
        if(i>mid){
            while(j<=r){
                b[k]=arr[j];
                j++;
                k++;
            }
        }
        if(i<=mid){
            while(i<=mid){
                b[k]=arr[i];
                k++;
                i++;
            }
        }
        for(int k=l;k<=r;k++){
            arr[k]=b[k];
        }
    
}
void mergesort(int arr[],int l,int r){
     if(l<r){
         int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
     }
}
int main(void){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(auto i:arr){
        cout<<i<<" ";
    }

}