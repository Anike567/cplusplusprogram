#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main(void)
{
    FILE *fp;
    fp=tmpfile();
    char writetofile[]="writing a temporary file";
    if(fp==NULL)
    {
        perror("error in creating a temporary file");
        exit(1);
    }
    
    fputs(writetofile,fp);
    rewind(fp);
    char readfromfile[50];
    fgets(readfromfile,sizeof(readfromfile),fp);
    cout<<readfromfile;
    return 0;
    
    
}