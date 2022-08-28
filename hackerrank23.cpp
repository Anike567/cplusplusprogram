#include<iostream>
using namespace std;
int main(void){
    int n=6;
    // cin>>n;
    int count=0;
    while(n){
        n=n&(n<<1);
        count++;
    }
    cout<<count;
    return 0;
}