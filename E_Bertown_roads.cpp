#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool vis[100000+5];
ll in[100000+5],low[100000+5];
vector<pair<ll,ll>> V;
ll timer=0;
bool f=true;
void dfs(vector<ll> adj[],ll v,ll pr)
{
    vis[v] = 1;
    in[v] = low[v] = ++timer;
    for(ll i : adj[v])
    {
        if(i==pr)continue;
        else if(vis[i])
        {
            low[v] = min(low[v],in[i]);
            if(in[v]>in[i])V.push_back({v,i});
        }
        else
        {
            dfs(adj,i,v);
            if(in[v]<low[i])f=false;
            V.push_back({v,i});
            low[v] = min(low[v],low[i]);
        }
    }
}
void solve()
{
   ll N,M;cin>>N>>M;
   memset(vis,0,sizeof(vis));
   vector<ll> adj[N+1];
   //vector<pair<ll,ll> > V;
   ll x,y;
   for(ll i=0;i<M;++i)
   {
       cin>>x>>y;
       //V.push_back({x,y});
       adj[x].push_back(y);
       adj[y].push_back(x);
   }
   dfs(adj,1,-1);
   if(f)
   {
       for(ll i=0;i<V.size();++i)
       {
           cout<<V[i].first<<' '<<V[i].second<<'\n';
       }
   }
   else cout<<"0\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/ 