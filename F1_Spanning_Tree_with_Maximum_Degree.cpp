#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,M;cin>>N>>M;
    vector<ll> adj[N+1];
    ll u,v;
    for(ll i=0;i<M;++i)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll mx=1;
    for(ll i=2;i<=N;++i)
    {
        //mx = max(mx,adj[i]);
        if(adj[i].size()>adj[mx].size())mx=i;
    }
    queue<ll> q;
    q.push(mx);
    bool vis[N+1];
    memset(vis,false,sizeof(vis));
    vis[mx]=true;
    while(!q.empty())
    {
        ll t= q.front();q.pop();
        for(ll i : adj[t])
        {
            if(!vis[i])
            {
                q.push(i);
                vis[i]=true;
                cout<< t <<' '<< i <<'\n';
            }
        }
    }

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/