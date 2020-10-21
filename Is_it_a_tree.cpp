#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll vis[1000+5];
void dfs(vector<ll> adj[],ll v)
{
    vis[v] = 1;
    for(ll i : adj[v])
    {
        if(vis[i]!=-1)dfs(adj,i);
    }
}
void solve()
{
    ll N,M;cin>>N>>M;
    memset(vis,-1,sizeof(vis));
    vector<ll> adj[N+1];
    ll x,y;
    for(ll i=0;i<M;++i)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ll c=0,s=0;
    for(ll i=1;i<=N;++i)
    {
        if(vis[i]==0)
        {
            dfs(adj,i);++c;
        }
        s+=adj[i].size();
    }
    s/=2;
    s==N-1 and c==1 ?cout<<"YES" : cout<<"NO";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;      //  cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/