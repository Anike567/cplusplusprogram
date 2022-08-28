#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    double b;
    string str,st;
    cin>>a;
    cin>>b;
    a=a+i;
    b=b+d;
    getline(cin>>ws,str);
    st=s+str;
    cout<<a<<endl;
    // printf("%2f\n",b);
    cout<<fixed<<setprecision(1)<<b<<endl;
    cout<<st;
    return 0;