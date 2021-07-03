#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<ll> adj[100000+5];
bool vis[100000+5]; 
void dfs(ll v,ll u)
{
    vis[v] = true;
    for(auto i: adj[v])
        if(!vis[i])dfs(i,u);
}
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll M;cin>>M;
    while (M--)
    {
        ll x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
    ll a,b;cin>>a>>b;
    dfs(a,b);
    cout<< ((vis[a] and vis[b])?"1":"0")<<'\n'; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/