#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    for(int i=s.size()-1;i>=0;--i)
    {
        if(s[i]=='1')
        {
            cout<<i;return;
        }
    } 
    cout<<"-1";
}
int main()
{
    solve();
    return 0;
}