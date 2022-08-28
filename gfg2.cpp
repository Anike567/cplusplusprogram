#include<iostream>
using namespace std;
int sum( int n){
    if(n==0){
        return 0;
    }
    int tmp=sum(n-1);
    return n+tmp;
}
int main(void){
    cout<<sum(10);
}