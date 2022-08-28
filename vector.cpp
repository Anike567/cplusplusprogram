#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
    vector<int>v;
    // vector<int>::iterator itr;
    for(int i=1;i<=10;i++)
    {
        v.push_back(2*i);
    }
    for(auto itr=v.begin();itr<v.end();itr++)
    {
        cout<<*itr<<endl;
    }
    cout<<v.size()<<endl<<v.max_size()<<endl<<v.capacity();
    return 0;
}