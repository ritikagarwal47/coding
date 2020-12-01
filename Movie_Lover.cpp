#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    vector<pair<ll,ll>> V;
    ll x,y;
    for(ll i=0;i<N;++i)
    {
        cin>>x>>y;
        V.push_back({x,y});
    }
    sort(V.begin(),V.end(),[](pair<ll,ll> &x, pair<ll,ll> &y) {return x.second < y.second;});
    //for(ll i=0;i<N;++i)cout<<V[i].first<<' '<<V[i].second<<'\n';
    ll ans=1;
    ll i=0;
    for(ll j=1;j<N;++j)
    {
        if(V[j].first>=V[i].second)++ans,i=j;
    }
    cout<< ans <<'\n';
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/HR