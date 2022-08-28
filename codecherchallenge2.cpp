#include<iostream>
#include<map>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        map<int ,int> mp;
        int mx_fre=0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            mp[num]++;
            mx_fre=max(mx_fre,mp[num]);

        }
        int ops=0;
        for(auto [key,val]:mp){
            int cnt=val;
            if(x!=0){
                cnt=cnt+mp[key^x];
            }
            int req=mp[key^x];
            if(cnt>mx_fre){
                mx_fre=cnt;
                ops=req;
            }
            else if(cnt==mx_fre){
                ops=min(ops,req);
            }
        }
        cout<<mx_fre<<" "<<ops<<endl;
    }
}