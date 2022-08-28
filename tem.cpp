#include<bits/stdc++.h>
using namespace std;
int main(void){
    string s="abc";
    while(next_permutation(s.begin(),s.end())){
        cout<<s<<endl;
    }
}