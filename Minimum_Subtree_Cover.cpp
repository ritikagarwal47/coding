#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
//ll dis[1000+5];
//bool vis[1000+5],
ll wt[100000+5];
//ll p,mx;
vector<ll> len;
void dfs2(ll v,ll p,vector<ll> adj[])
{
    bool ok = true;
    for(auto i:adj[v])
    {
        //cout<<i<<' ';
        //if(!vis[i])
        if(i!=p)
        {
            dfs2(i,v,adj);ok=false;
            wt[v] = max(wt[v],1+wt[i]);
        }
    } 
    if(ok)wt[v]=1;
    //cout<<v<<' '<<c<<'\n';
    //return wt[v]&=c;
}
void dfs(ll v,ll p,vector<ll> adj[],ll c=1)
{
    //vis[v]=1;
    // if(c>mx)
    // {
    //     //cout<<c<<' '<<v<<"pp\n";
    //     mx=c;
    //     p=v;
    // }
    bool ok=true;
    ll mx=0;
    for(auto i:adj[v])
    {
        if(i!=p)mx=max(mx,wt[i]),ok=false;
    }
    if(ok)
    {
        len.push_back(c);return;
    }
    ok=true;
    for(auto i:adj[v])
    {
        //cout<<i<<' ';
        //if(!vis[i])
        if(i!=p)
        {
            if(wt[i]==mx and ok)dfs(i,v,adj,c+1),ok=false;
            else dfs(i,v,adj);
        }
    } 
    //cout<<mx<<' '<<c<<'\n';
}
void solve()
{
    ll N,K;cin>>N>>K;//adj->clear();
    vector<ll> adj[N+1];
    for(ll i=0;i<N-1;++i)
    {
        ll x,y;cin>>x>>y;//cout<<x<<' '<<y<<'\n';
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if(K==1 or N==1)
    {
        cout<<"1\n";return;
    }
    //for(ll i=1;i<=N;++i)wt[i]=0;
    ll ans=1;//p=0;mx=0;
    bool vis[N+1];
    memset(vis,0,sizeof(vis));
    ll p=-1;ll mx=0;vis[1]=true;
    queue<pair<ll,ll>> q;q.push({1,0});
    while(q.size()>0)
    {
        ll d1 = q.front().first;
        ll d2 = q.front().second;
        q.pop();
        //cout<<mx<<' '<<p<<'\n';
        if(p<d2)
        {
            p=d2;
            mx = d1;
        }
        //cout<<mx<<' '<<p<<'\n';
        for(auto i: adj[d1])
        {
            if(!vis[i])
            {
                vis[i]=true;
                q.push({i,d2+1});
            }
        }
        //cout<<mx<<' '<<p<<'\n';
    }
    len.clear();
    for(ll i=0;i<=N;++i)wt[i]=0;
    dfs2(mx,-1,adj);
    // K-=mx;//cout<<mx<<' '<<p<<'\n';
    // if(K<=0)
    // {
    //     cout<<"2\n";return;
    // }
    dfs(mx,-1,adj);
    sort(len.begin(),len.end());//,greater<ll>());
    //for(auto i:len)cout<<i<<' ';cout<<'\n';
    ll i=len.size()-1;
    while (K>0)
    {
        //dfs2(1,adj);
        //p=0;mx=0;
        //for(ll i=1;i<=N;++i)vis[i]=0;
        //for(ll i=1;i<=N;++i)cout<<wt[i]<<' ';cout<<'\n';
        //dfs(1,adj,1);//cout<<mx<<' '<<p<<' '<<K<<'\n';
        //if(mx==0)break;
        K-=len[i--];
        ++ans;
        //if(i<0)break;
    }
    cout<<ans<<'\n';
    //for(ll i=1;i<=N;++i)cout<<dis[i]<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/