#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll fun(vector<char> V,vector<char> A)
{
    set<char> s (V.begin(),V.end());
    ll ans=0;
    for(auto i  : A)
    {
        if(s.find(i)!=s.end())++ans;
    }
    return ans;
}
void solve()
{
    ll N;cin>>N;
    string s;
    map<string,vector<char>> M;
    for(ll i=0;i<N;++i)
    {
        cin>>s;
        M[s.substr(1)].push_back(s[0]);
    }
    ll ans=0;
    for(auto i : M)
    {
        for(auto j : M)
        {
            if( i.first != j.first)
            {
                ll tp = fun(i.second , j.second);
                ans += (i.second.size() - tp )*(j.second.size() - tp );
            }
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}