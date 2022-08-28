#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(void)
{
   char line[100];
   fstream file;
   file.open("sample.txt",ios::in |ios::out );
   cin.getline(line,99);
   int len =strlen(line);
   for(int i=0;i<len;i++)
   {
      file<<line[i];
   }
   
   return 0;
}