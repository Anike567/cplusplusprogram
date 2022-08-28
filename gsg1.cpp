#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(void){
    int n;
    cin>>n;
    string arr[2]={"even","odd"};
    cout<<arr[n%2];
}