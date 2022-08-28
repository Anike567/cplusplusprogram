 #include<iostream>
 using namespace std;
 int main(void)
 {
    int n,k,count=0;
    cin>>n>>k;
    while(n--)
    {
        int t;
        cin>>t;
        if(t%k==0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
 }