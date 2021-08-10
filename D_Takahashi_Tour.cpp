#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<ll> adj[200000+5];
bool vis[2000000+5];
void dfs(ll v)
{
    vis[v]=true;
    cout<<v<<' ';
    for(auto i:adj[v])
    {
        if(!vis[i])
        {
            dfs(i);
            cout<<v<<' ';
        }
    }
}
void solve()
{
    ll N;cin>>N;
    for(ll i=0;i<N;++i)
    {
        ll x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(ll i=1;i<=N;++i)
    {
        sort(adj[i].begin(),adj[i].end());
    }
    dfs(1);
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;      //  cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/