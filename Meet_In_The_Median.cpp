#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    vector<pair<ll,ll>> A ;
    vector<ll> B;
    for(ll i=0;i<N;++i)
    {
        ll x;cin>>x;
        B.push_back(x);
        A.push_back({x,i});
    }
    sort(A.begin(),A.end());
    ll ans=0;
    if(K&1)
    {
        ++K;
        ans = A[N - K/2].first;
        --K;
    }
    else
    {
        ans = A[N - K/2 - 1].first;
    }
    vector<ll> V;
    for(ll i=N-1;i>=0;--i)
    {
        V.push_back(A[i].second);--K;
        if(K==0)break;
    }
    sort(V.begin(),V.end());
    cout<<ans<<'\n';
    for(auto i:V)
    {
        cout<<B[i]<<' ';
    }
    cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/