#include<iostream>
using namespace std;
template<class t>
t abs(t a){
    return abs(a);
}
int main(){
    int i=-10;
    double j=-2.3;
    cout<<abs(i)<<endl<<abs(j);
    return 0;
}