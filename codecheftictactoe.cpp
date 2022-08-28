#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;
int main(void)
{
    long long t;
    cin >> t;
    while (t--)
    {
        vector<string> a(3), a_t(3);
        cin >> a[0] >> a[1] >> a[2];
        a_t = a;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i < j)
                    swap(a_t[i][j], a_t[j][i]);
            }
        }
        ll x_cnt = 0, o_cnt = 0;
        for (auto row : a)
        {
            x_cnt += count(row.begin(), row.end(), 'x');
            o_cnt += count(row.begin(), row.end(), 'o');
        }
        auto check = [&](char ch)
        {
            bool ans = false;
            for (auto row : a)
            {
                if (count(row.begin(), row.end(), ch) == 3)
                {
                    ans = true;
                }
            }
            for (auto col : a_t)
            {
                if (count(col.begin(), col.end(), ch) == 3)
                {
                    ans = true;
                }
            }
            if (a[0][0] == ch and a[1][1] == ch and a[2][2] == ch)
            {
                ans = true;
            }
            if (a[2][0] == ch and a[1][1] == ch and a[0][2] == ch)
            {
                ans = true;
            }
            return ans;
        };
        bool x_win,o_win;
        x_win=check('x');
        o_win=check('o');
        ll ans=2;
        if((x_win&&o_win) or !(x_cnt==o_cnt or x_cnt>o_cnt)or (x_win&&!(x_cnt==o_cnt+1)) or((o_win)&&!(x_cnt==o_cnt)))
        {
            ans=3;
        }
        else{
            if(((x_cnt==o_cnt)or(x_cnt==o_cnt+1)&&(x_win+o_win==1)or(x_cnt+o_cnt==9)))
            {
                ans=1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}