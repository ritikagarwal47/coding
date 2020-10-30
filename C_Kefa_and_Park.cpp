#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool vis[100000+5];
ll K;
ll ans=0;
void dfs(vector<ll> adj[],ll *weight,ll v,ll c,bool f)
{
    vis[v] = 1;
    if(weight[v])++c;
    else c=0;

    if(c>K)f=false;

    if(adj[v].size()==1 and v!=1)
    {
        if(f)ans++;
    }
    else
    {
    for(ll i : adj[v])
    {
        if(vis[i]==0)
        {
            dfs(adj,weight,i,c,f);
        }
    }
    }
}
void solve()
{
    ll N;cin>>N>>K;
    memset(vis,0,sizeof(vis));
    ll weight[N+1]; for(ll i=1;i<=N;++i)cin>>weight[i];
    vector<ll> adj[N+1];
    ll x,y;
    for(ll i=0;i<N-1;++i)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(adj,weight,1,0,true);
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/