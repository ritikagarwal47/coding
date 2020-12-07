#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    vector<pair<ll,ll>> V;
    ll u,v;
    for(ll i=0;i<N;++i)
    {
        cin>>u>>v;
        V.push_back({u,v});
    }
    
    for(ll i=0;i<N;++i)
    {
        ll c=0;
        for(ll j=0;j<N;++j)
        {
            if((abs(V[i].first - V[j].first) + abs(V[i].second - V[j].second))<=K)++c;
        }
        if(c==N)
        {
            cout<<"1\n";return;
        }
    }
    cout<<"-1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/