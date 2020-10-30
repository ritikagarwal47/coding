#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool vis[100000+5];
void dfs(vector<ll> adj[],ll v)
{
    vis[v]=1;
    for(ll i : adj[v])
    {
        if(vis[i]==0)dfs(adj,i);
    }
}
void solve()
{
    ll N,M,cl,cr;cin>>N>>M>>cl>>cr;
    vector<ll> adj[N+1];
    memset(vis,0,sizeof(vis));
    ll x,y;
    while(M--)
    {
        cin>>x>>y;
        adj[x].push_back(y);adj[y].push_back(x);
    }
    if(cl<=cr)
    {
        cout<< N*cl <<'\n';return;
    }
    ll c=0;
    for(ll i=1;i<=N;++i)
    {
        if(vis[i]==0)dfs(adj,i),++c;
    }
    cout<< (N-c)*cr + c*cl <<'\n'; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/