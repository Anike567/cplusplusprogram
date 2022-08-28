#include<iostream>
#include<map>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        map<char,int>a;
        map<char,int>b;
        for(int i=0;i<s1.length();i++){
            a[s1[i]]++;
        }
        for(int i=0;i<s2.length();i++){
            b[s2[i]]++;
        }
        for(auto itr=b.begin();itr!=b.end();itr++){
            if(a[itr->first]==0){
                cout<<itr->first;
            }
        }
    }

}