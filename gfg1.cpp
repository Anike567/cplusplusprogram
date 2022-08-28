#include<iostream>
using namespace std;
string sub(string str){
    if(str.length()==0){
        return "string is empty";
    }
    string pre=sub(str.substr(1));
    cout<<pre<<endl;
    return str.substr(1);
}
int main(void){
    cout<<sub("abc");
}