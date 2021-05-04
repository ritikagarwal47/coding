#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
// vector<pair<ll,ll>> adj[100000+5];
// bool vis[100000+5];
// ll ans=0,s=0;//,dis[1000000+5];
// void dfs(ll u,ll d)
// {
//     vis[u] = true;
//     if(d>s)
//     {
//         s=d;ans=u;
//     }
//     else if(d==s)
//     {
//         ans=min(ans,u);
//     }
//     for(auto i : adj[u])
//     {
//         if(!vis[i])dfs(i,d+1);
//     }
//     //dis[u] = max(dis[u],d);
// }
void solve()
{
    ll N,K;cin>>N>>K;    
    vector<pair<ll,ll>> adj[N];
    for(ll i=0;i<K;++i)
    {
        ll a,b;cin>>a>>b;
        adj[a].push_back({b,1});adj[b].push_back({a,1});
    }      
    priority_queue<pair<ll,ll> ,vector<pair<ll,ll>> ,greater<pair<ll,ll>> > pq;
    //bool vis[N+1];memset(vis,false,sizeof(vis));
    ll d[N];//={0};
    //for(auto i : d)cout<<i<<' ';cout<<'\n';
    pq.push({0,0});//memset(d,100000,sizeof(d));
    d[0]=0;
    for(ll i=1;i<N;++i)d[i]=1000000;
    //for(ll i=0;i<N;++i)cout<<d[i]<<' ';cout<<'\n';
    while(!pq.empty())
    {
        ll curr = pq.top().second;
        ll curr_d = pq.top().first;
        pq.pop();
        for(pair<ll,ll> edge: adj[curr])
        {
            if((curr_d + edge.second) < d[edge.first])
            {
                d[edge.first] = curr_d + edge.second;
                pq.push({d[edge.first],edge.first});
            }
        }
    }
    ll mx=0,ans=0;
    for(ll i=1;i<N;++i)
    {
        if(mx<d[i])
        {
            mx=d[i];ans=i;
        }
        // else if(mx==d[i])
        // {
        //     ans=min(ans,i);
        // }
    }
    cout<<ans<<' '<<mx<<'\n';
    // vector<ll> V;
    // for(ll i=0;i<S;++i)
    // {
    //     V.push_back(d[A[i]]);
    // }
    // for(auto i : V)cout<<i<<' ';cout<<'\n';
    //cout<<ans<<' '<<s<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/