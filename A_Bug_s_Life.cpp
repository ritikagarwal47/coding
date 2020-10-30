#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool vis[10000+5];
bool col[10000+5];
bool dfs(vector<ll> adj[],ll v,ll c)
{
    vis[v] = 1;
    col[v] = c;
    for(ll i : adj[v])
    {
        if(vis[i]==0){if(dfs(adj,i,c^1)==false)return false;}
        else if(col[i]==col[v])return false;
    }
    return true;
}
void solve()
{
    int T;cin>>T;
    for(ll i=1;i<=T;++i)
    {
        ll N,M;cin>>N>>M;
        vector<ll> adj[N+1] ;
        for(ll j=1;j<=M;++j)
        {
            ll x,y;cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        memset(vis,0,sizeof(vis));
        memset(col,-1,sizeof(col));
        if(dfs(adj,1,0))
        {
            cout<<"Scenario #"<<i<<":\n";
            cout<<"No suspicious bugs found!\n";
        }
        else 
        {
            cout<<"Scenario #"<<i<<":\n";
            cout<<"Suspicious bugs found!\n";
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/