#include<iostream>
using namespace std;
class A{
    public: static int a;
    public:A(){
        cout<<"hllo"<<endl;
    }
};
int A::a=1;
int main(void){
    
    A arr[100];
    return 0;
}