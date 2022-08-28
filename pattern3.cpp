#include<iostream>
using namespace std;
int main (void){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(i+j<=3){
                cout<<" ";
            }
            else
            {
                cout<<"* ";
            }
            
            
        }
        cout<<endl;
    }
    return 0;
}