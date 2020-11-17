#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll c=1;
vector<ll> adj[1001];
ll level[1001];
ll maxN,N;// = ceil(log2(1001));
ll table[1001][100];
ll lca(ll a,ll b)
{
    if(a==b)return a;
    if(level[a]>level[b])swap(a,b);
    ll d = level[b] - level[a];
    while(d>0)
    {
        ll  i = log2(d);
        b = table[b][i];
        d-=(1<<i);
    }
    if(a==b)return a;
    for(ll i=maxN;i>=0;--i)
    {
        if(table[a][i]!=-1 and table[a][i]!=table[b][i])
        {
            a = table[a][i];
            b = table[b][i];
        }
    }
    return table[a][0];
}
void pre()
{
    for(ll j=1;j<=maxN;++j)
    {
        for(ll i=1;i<=N;++i)
        {
            if(table[i][j-1]!=-1)
            {
                ll par = table[i][j-1];
                table[i][j] = table[par][j-1];
            }
        }
    }
}
void solve()
{
    cout<<"Case "<<c++<<":\n";
    cin>>N;
    level[1] = 1;
    memset(table,-1,sizeof(table));
    for(ll i=1;i<=N;++i)
    {
        ll M,x;cin>>M;
        for(ll j=0;j<M;++j)
        {
            cin>>x;
            adj[i].push_back(x);
            level[x] = level[i] + 1LL;
            table[x][0] = i;
        }
    }
    maxN = ceil(log2(N));
    pre();
    ll Q;cin>>Q;
    while(Q--)
    {
        ll u,v;cin>>u>>v;
        cout<< lca(u,v)<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/