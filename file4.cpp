#include<iostream>
#include<fstream>
using namespace std;
int main(void)
{
    string str,filename;
    cout<<"enter the file name";
    // cin>> filename;
    ifstream out("getchar");
    getline(out,str);
    ofstream in("b.txt");
    in<<str;
    // b.close();
    return 0;

}