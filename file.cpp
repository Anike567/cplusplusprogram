#include<iostream>
#include<fstream>
using namespace std;
int main(void)
{
  string st;
  ifstream b("a.txt");
  getline(b,st);
  cout<<st;



    return 0;

}
  