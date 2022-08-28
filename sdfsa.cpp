#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<iomanip>
using namespace std;
int main(void){
    int b=1;
    for(int i=2;i<=100;i++){
        if(i%2==0){
            b=b^i;
            cout<<i<<" "<<b<<endl;
        }
        else{
            b=b&i;
            cout<<i<<" "<<b<<endl;
        }
    }
}