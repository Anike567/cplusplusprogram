#include<iostream>
#include<vector>
using namespace std;
int main (void){
    vector<int> g1;
    int a;
    for(int i=1;i<=5;i++){
        cin>>a;
        g1.push_back(a);
    }
    for(auto i=g1.begin();i!=g1.end();i++){
        cout<<*i<<endl;
    }
    return 0;
}