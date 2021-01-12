#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool vis[100000+5];
ll wt[100000+5];
void solve()
{
    ll N;cin>>N;
    vector<ll> adj[N+1];
    
    for(ll i=0;i<N-1;++i)
    {
        ll x,y;cin>>x>>y>>wt[i+1];
        adj[x].push_back(y);
        adj[y].push_back(x);
    } 
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/