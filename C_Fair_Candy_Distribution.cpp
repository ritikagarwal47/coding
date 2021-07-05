#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    vector<pair<ll,ll>> V(N);
    vector<ll> ans(N);
    for(ll i=0;i<N;++i)
    {
        ll x;cin>>x;
        V[i].first = x;
        V[i].second = i;
    }  
    sort(V.begin(),V.end());
    ll p = K/N;
    K -= p*N;
    for(ll i=0;i<N;++i)ans[i]=p;
    for(ll i=0;i<K;++i)
    {
        ans[V[i].second]++;
    }
    for(auto i:ans)cout<<i<<'\n';//cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/