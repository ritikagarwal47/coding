#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    vector<pair<ll,ll> > V;
    ll mn=LONG_MAX,mx=0;
    for(ll i=0;i<N;++i)
    {
        ll x,y;cin>>x>>y;
        V.push_back({x,y});
        mn=min(mn,x);mx=max(mx,y);
    }
    ll ans=-1;
    for(ll i=0;i<N;++i)
    {
        if(V[i].first==mn and V[i].second==mx)ans=i+1;
    }
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/