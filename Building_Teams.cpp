#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll ans[100000+5];

void solve()
{
    ll N,M;cin>>N>>M;
    ll x,y;vector<ll> adj[N+1];
    for(ll i=0;i<M;++i)
    {
        adj[x].push_back(y);
        adj[y].push_back(x);
    } 
    
    for(ll i=1;i<=N;++i)cout<<ans[i]<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/