#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool vis[100000+5],in[100000+5],low[100000+5];
ll timer;
set<ll> s;
void dfs(vector<ll> adj[],ll v,ll pr)
{
    //cout<<v<<' ';
    vis[v] = 1;
    in[v] = low[v] = timer++;
    //cout<<timer<<'\n';
    ll ch=0;
    for(ll i : adj[v])
    {
        if(i==pr)continue;
        if(vis[i]==1)low[v] = min(low[v],in[i]);
        else
        {
           // cout<<v<<' ';
            dfs(adj,i,v);++ch;
            low[v] = min(low[v],low[i]);
            if(in[v]<=low[i] and pr!=-1)s.insert(v);//,cout<<v<<' ';          
        }
    }
    if(pr==-1 and ch>1)s.insert(1);
}
void solve()
{
    while (true)
    {
        timer = 0 ;
        s.clear();
        ll N,M;cin>>N>>M;   
        if(N==0 and M==0)return;
        vector<ll> adj[N+1];
        memset(vis,0,sizeof(vis));
        ll x,y;
        while(M--)
        {
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dfs(adj,1,-1);
        // for(ll i=1;i<=N;++i)
        // {
        //     if(vis[i]==0)dfs(adj,i,-1);
        // }
        // for(ll i:s)cout<<i<<' ';
        //if(s.size()==0)cout<<"0\n";

       // else cout<< s.size() - 1 <<'\n';
        for(ll i=1;i<=N;++i)cout<<in[i]<<' ';
        cout<<'\n';
        for(ll i=1;i<=N;++i)cout<<low[i]<<' ';
        cout<<'\n';
    }       
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/