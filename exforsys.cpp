#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<iomanip>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n==2){
            cout<<"3"<<endl;
        }
        else if(n==3){
            cout<<"3"<<endl;
        }
        else if(n==4){
            cout<<"7"<<endl;
        }
        else if(n==5){
            cout<<"5"<<endl;
        }
        else if(n%4==2){
            cout<<"3"<<endl;
        }
        else if(n%4==3){
            cout<<"3"<<endl;
        }
        else if(n%4==1){
            cout<<(5+((n/4)-1)*4)<<endl;
        }
        else{
            cout<<(7+((n/4)-1)*4)<<endl;  
        }
    }
}