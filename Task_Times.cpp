#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M,K;cin>>N>>M>>K;
    ll C[N];for(ll i=0;i<N;++i)cin>>C[i];    
    ll T[N];for(ll i=0;i<N;++i)cin>>T[i];  
    vector<ll> adj[M+1];
    for(ll i=0;i<N;++i)
    {
        adj[C[i]].push_back(T[i]);
    } 
    //ll vis[M+1]={0};
    ll ans=0;
    for(ll i=1;i<=M;++i)
    {
        sort(adj[i].begin(),adj[i].end());
    }
    priority_queue<ll,vector<ll>,greater<ll>> p;
    for(auto V:adj)
    {
        for(ll i=0;i<V.size();++i)
        {
            if(i==0)p.push(V[i]);
            else if((i+1)<V.size())
            {
                p.push(V[i]+V[i+1]);
                ++i;
            }
        }
    }
    while(K>0 and p.size())
    {
        ll a = p.top();p.pop();
        if((K-a)<0)break;
        K-=a;++ans;
    }
    // while(K>0)
    // {
    //     ll a = LONG_MAX,c=0;
    //     for(ll i=1;i<=M;++i)
    //     {
    //         ll p = adj[i].size();
    //         ll d = p - vis[i];
    //         ll z;
    //         if(vis[i]>=p)continue;
    //         if(vis[i]==0)
    //         {
    //             z = adj[i][vis[i]];
    //         }
    //         else if(d==1)continue;
    //         else z = adj[i][vis[i]] + adj[i][vis[i]+1];
    //         if(z<a)
    //         {
    //             a = z;
    //             c = i;
    //         }
    //     }
    //     //cout<<a<<' '<<c<<'\n';
    //     if((K-a)<0)break;
    //     K-=a;
    //     if(vis[c]==0)vis[c]++;
    //     else vis[c]+=2;
    //     ans++;
    // }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/