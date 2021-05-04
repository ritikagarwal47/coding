#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K,a,x;cin>>N>>K>>a;
    set<ll> st;
    for(ll i=0;i<K;++i)cin>>x,st.insert(x-1);
    vector<ll> adj[N];
    for(ll i=0;i<N-1;++i)
    {
        ll u,v;cin>>u>>v;--u;--v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }  
    vector<vector<ll>> ans(N,vector<ll>(30,-1));
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/