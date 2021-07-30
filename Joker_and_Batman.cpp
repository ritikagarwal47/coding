#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M,L;cin>>N>>M>>L;
    ll dp[N]={0};
    for(ll i=0;i<M;++i)
    {
        ll p;cin>>p;
        for(ll j=0;j<p;++j)
        {
            ll a;cin>>a;
            dp[a] = i;
        }
    }   
    ll ans=1;
    ll A[L];
    for(ll i=0;i<L;++i)cin>>A[i];
    for(ll i=1;i<L;++i)
    {
        if(dp[A[i]]!=dp[A[i-1]])++ans;
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/