#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<ll> adj[100000+5];
bool vis[100000+5];
vector<ll> fun()
{
    ll a,b;cin>>a>>b;
    vector<ll> V;
    queue<ll> p;p.push(a);vis[a]=true;
    while(p.size())
    {
        auto x = p.front();p.pop();
        for(auto i : adj[x])
        {
            if(!vis[i])
            {
                if(i==b)V.push_back(x);
                else 
                {
                    vis[i] = true;
                    p.push(i);
                }
            }
        }
    }
    if(V.empty())return {-1};
    reverse(V.begin(),V.end());
    return V;
}
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll Q;cin>>Q;
    while(Q--)
    {
        ll x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
    vector<ll> ans = fun();
    for(auto i:ans)cout<<i<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/