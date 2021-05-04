#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    vector<ll> adj[1001];
    ll mx=0;
    ll a,b;
    while(N--)
    {
        cin>>a>>b;
        mx = max(mx,max(a,b));
        adj[a].push_back(b);
        //adj[b].push_back(a);
    }
    for(ll i=0;i<=mx;++i)
    {
        set<ll> s;
        for(ll j: adj[i])
        {
            s.insert(j);
        }
        if(s.size()==3)
        {
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/