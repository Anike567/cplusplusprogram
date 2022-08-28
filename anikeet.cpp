#include<iostream>
using namespace std;
int main(void){
    int n=6;
    while(n){
    n=n&(n<<1);
    cout<<n;
    cout<<endl;
    }
    return 0;
}