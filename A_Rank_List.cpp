#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool cmp(pair<ll,ll> &a,pair<ll,ll> &b)
{
    if(a.first==b.first)
        return a.second<b.second;
    return a.first>b.first;
}
void solve()
{
    ll N,K;cin>>N>>K;
    vector<pair<ll,ll>> V(N);
    for(ll i=0;i<N;++i)cin>>V[i].first>>V[i].second;
    sort(V.begin(),V.end(),cmp);
    ll a = V[K-1].first;
    ll b = V[K-1].second;
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        if(a==V[i].first and b==V[i].second)++ans;
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/