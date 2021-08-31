#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll mod=1e18;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M,K;cin>>N>>M>>K;
    ll dis[N+1],vis[N+1];
    vector<pair<ll,ll>> V[N+1];
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    for(ll i=0;i<=N;++i)
    { 
        vis[i]=0;
        dis[i]=mod;
    }
    //vector<pair<ll,ll>> slots;
    for(ll i=0;i<K;++i)
    {
        ll x,y;cin>>x>>y;
        dis[x]=y;
        pq.push({dis[x],x});
    }
    for(ll i=0;i<M;++i)
    {
        ll x,y,z;cin>>x>>y>>z;
        V[x].push_back({y,z});
        V[y].push_back({x,z});
    }
    
    while(!pq.empty())
    {
        ll u =pq.top().second;pq.pop();

        if(vis[u]==0)
        {
            vis[u]++;

            for(auto p: V[u])
            {
                if((dis[p.first]>(dis[u]+p.second)))// and (vis[v]==0))
                {
                    dis[p.first]=dis[u]+p.second;
                    pq.push({dis[p.first],p.first});
                }
            }
        
        }
    }
    for(ll i=1;i<=N;++i)cout<<dis[i]<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/