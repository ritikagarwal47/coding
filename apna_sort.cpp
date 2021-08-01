#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    string s;cin>>s;
    vector<char> V1,V2,V3,V4;
    for(int i=0;i<s.size();++i)
    {
        char ch = s[i];
        if(ch>='a' and ch<='z')V1.push_back(ch);
        else if(ch>='A' and ch<='Z')V2.push_back(ch);
        else
        {
            int p = (ch-'0');
            if(p&1)V3.push_back(ch);
            else V4.push_back(ch);
        }
    }
    string ans="";
    for(auto i:V1)
    {
        ans+=i;
    }
    for(auto i:V2)
    {
        ans+=i;
    }
    for(auto i:V3)
    {
        ans+=i;
    }
    for(auto i:V4)
    {
        ans+=i;
    }
    cout<<ans<<'\n';
}
int main()
{
    solve();
    return 0;
}