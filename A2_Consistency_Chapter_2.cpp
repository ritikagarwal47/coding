#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<ll> adj[26];
ll fun(ll u,ll v)
{
    ll ans=0;
    ll vis[26]={0};
    queue<pair<ll,ll>> p;p.push({u,0});
    vis[u]=1;
    while(p.size())
    {
        pair<ll,ll> f = p.front();p.pop();
        ll a = f.first;
        ll b = f.second;
        if(a==v)return b;
        for(auto i:adj[a])
        {
            if(vis[i]==0)
            {
                vis[i]=1;
                p.push({i,b+1});
            }
        }
    }
    return -1;
}
void solve()
{
    for(ll i=0;i<26;++i)
    {
        adj[i].clear();
    }
    string s;cin>>s;
    ll N = s.size();
    ll M;cin>>M;
    for(ll i=0;i<M;++i)
    {
        string st;cin>>st;
        ll a = st[0]-'A';
        ll b = st[1] - 'A';
        //cout<<a<<' '<<b<<'\n';
        adj[a].push_back(b);
    }
    ll ans=mod;
    for(ll j=0;j<26;++j)
    {
        ll c=0;
        bool ok=true;
        for(ll i=0;i<N;++i)
        {
            ll p = fun(s[i]-'A',j);
            if(p==-1)
            {
                ok=false;
                break;
            }
            c+=p;
        }
        if(ok)ans=min(ans,c);
        //cout<<ok<<' ';
    }
    cout<< ((ans==mod)?-1:ans) <<'\n';
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
solve();
}exit(0);
}/*Solved By:- Ritik Agarwal*/