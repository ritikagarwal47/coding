#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
const int INF = 1000000000;
//The end result of coders personal growth is,there codes becomes there documentation
//ll degree[100000+5];
//ll N;
// void dfs(vector<ll> adj[100000+5],bool *vis,ll *degree ,ll v,ll c)
// {
//     vis[v] =true;degree[v] = c;
//     for(auto i : adj[v])
//     {
//         if(!vis[i])dfs(adj,vis,degree,i,c+1);
//         else
//         {
//             degree[i] = min(degree[i],c+1);
//         }
//     }
// }
void solve()
{
    ll N,M,S,K;cin>>N>>M>>S>>K;
    vector<pair<ll,ll>> adj[N+1];
    for(ll i=0;i<M;++i)
    {
        ll x,y;cin>>x>>y;
        adj[x].push_back({y,1});
        adj[y].push_back({x,1});
    } 
    ll A[S]; for(ll i=0;i<S;++i)cin>>A[i];
    //memset(degree,0,N+1);//memset()
    priority_queue<pair<ll,ll> ,vector<pair<ll,ll>> ,greater<pair<ll,ll>> > pq;
    //bool vis[N+1];memset(vis,false,sizeof(vis));
    ll d[N+1];memset(d,100,sizeof(d));//={0};
    //for(auto i : d)cout<<i<<' ';cout<<'\n';
    pq.push({0,0});
    d[0]=0;
    while(!pq.empty())
    {
        ll curr = pq.top().second;
        ll curr_d = pq.top().first;
        pq.pop();
        for(pair<ll,ll> edge: adj[curr])
        {
            if((curr_d+edge.second) < d[edge.first])
            {
                d[edge.first] = curr_d + edge.second;
                pq.push({d[edge.first],edge.first});
            }
        }
    }
    //for(auto i : d)cout<<i<<' ';cout<<'\n';
    // //dfs(adj,vis,degree,0,0);
    // //cout<< degree[N] <<'\n';
    // ll n = N;
    // 
    // //priority_queue<ll
    // 
    // d[0] = 0;
    // for (ll i = 0; i <= n; i++) 
    // {
    //     ll v = -1;
    //     for (auto j : adj[v]) 
    //     {
    //         if (!vis[j] && (v == -1 or  d[j] < d[v]))v = j;
    //     }

    //     //if (d[v] == INF)break;

    //     vis[v] = true;
    //     for (auto edge : adj[v]) 
    //     {
    //         ll to = edge;
    //         //ll len = edge.second;

    //         if (d[v] + 1 < d[to]) 
    //         {
    //             d[to] = d[v] + 1;
    //             //p[to] = v;
    //         }
    //     }
    // }
















    
    //for(ll i=0;i<=N;++i)cout<<degree[i]<<' ';cout<<'\n';
    vector<ll> V;
    for(ll i=0;i<S;++i)
    {
        V.push_back(d[A[i]]);
    }
    sort(V.begin(),V.end());
    //for(auto  i :V)cout<<i<<' ';cout<<'\n';
    ll ans=0;
    for(ll i=0;i<K;++i)
    {
        ans += 2*V[i];
        //cout<<ans<<' ';
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/