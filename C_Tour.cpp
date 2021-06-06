#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll c;vector<ll> adj[2000+1];
void dfs(ll v,ll *vis)
{
    vis[v]=1;++c;
    for(auto i:adj[v])
    {
        if(!vis[i])dfs(i,vis);
    }
}
void solve()
{
    ll N,M;cin>>N>>M;
    
    for(ll i=0;i<M;++i)
    {
        ll x,y;cin>>x>>y;
        adj[x].push_back(y);
    } 
    ll ans=0;ll vis[N+1];
    for(ll i=1;i<=N;++i)
    {
        c=0;
        for(ll i=1;i<=N;++i)vis[i]=0;
        dfs(i,vis);
        ans+=c;
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/