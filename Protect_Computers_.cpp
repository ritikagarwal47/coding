#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool vis[10000+5];
void dfs(ll i, vector<ll> adj[])
{
    vis[i]=true;
    for(auto v : adj[i])
    {
        if(!vis[v])
        {
            dfs(v,adj);
        }
    }
}
void solve()
{
    ll N,M;cin>>N>>M;
    ll A,B;cin>>A>>B;
    memset(vis,false,sizeof(vis));
    vector<ll> adj[N+5];
    for(ll k=0;k<M;++k)
    {
        ll i,j;cin>>i>>j;
        adj[i].push_back(j);adj[j].push_back(i);
    }
    ll c=0;
    for(ll i=1;i<=N;++i)
    {
        if(!vis[i])
        {
            dfs(i,adj);++c;
        }
    }
    //if(c==1)cout<<"0\n";
    cout<< A + min(A,B)*(c-1)<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/