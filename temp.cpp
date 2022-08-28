#include<iostream>
#include<map>
using namespace std;
int main(void){
    int n=123;
    int rev=0;

    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    
    cout<<rev;
}