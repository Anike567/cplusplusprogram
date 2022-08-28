#include<iostream>
#include<string>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool c;
        if((s[0]==60)&&(s[1]==47)&&(s[s.size()-1]==62)){
            c=true;
            for(int i=2;i<s.size()-1;i++){
                if(s[i]==60||s[i]==47||s[i]==62){
                    c=false;
                    break;
                }
            }
        }
        if(c){
            cout<<"success"<<endl;
        }
        else{
            cout<<"error"<<endl;
        }
    }
}