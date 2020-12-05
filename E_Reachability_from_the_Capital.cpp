#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
vector<ll> adj[5000+1];
ll vis[5000+1];
void dfs(ll v,ll par)
{
    vis[v] = par;
    //cout<<par<<'\n';
    for(auto i : adj[v])
    {
        if(vis[i]!=par)dfs(i,par);
    }
}
void solve()
{
    ll N,M,S;cin>>N>>M>>S;
    for(ll i=0;i<M;++i)
    {
        ll u,v;cin>>u>>v;
        if(v!=S)adj[u].push_back(v);
    }
    for(ll i=1;i<=N;++i)if(vis[i]==0)dfs(i,i);
    set<ll> ans;
    for(ll i=1;i<=N;++i)ans.insert(vis[i]);
    //for(auto i : ans)cout<<i<<'\n';
    cout<< ans.size() - 1 <<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/