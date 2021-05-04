#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
vector<ll> V[100000+5];
pair<ll,ll> dfs(ll v)
{
    ll mx = 0;
    ll s = 1;
    for(ll i : V[v])
    {
        pair<ll,ll> ans = dfs(i) ;
        mx = max(mx,ans.first);
        s += ans.second;
    }
    return {mx + s , s};
}
void solve()
{
    ll N;cin>>N;
    ll x;
    //V.clear();
    for(ll i=1;i<=N;++i)V[i].clear();
    for(ll i=2;i<=N;++i)
    {
        cin>>x;
        V[x].push_back(i);
    }
    pair<ll,ll> ans = dfs(1);
    //V.clear();
    cout<< ans.first <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/