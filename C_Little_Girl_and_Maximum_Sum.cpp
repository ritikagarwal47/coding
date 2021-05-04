#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    sort(A,A+N,greater<ll>());
    ll dp[N]={0};
    while(M--)
    {
        ll a,b;cin>>a>>b;--a;
        dp[a]++;dp[b]--;
    }  
    vector<ll> V;
    for(ll i=0;i<N;++i)
    {
        if(i)dp[i] = dp[i] + dp[i-1];
        if(dp[i]!=0)V.push_back(dp[i]);
    }
    ll ans=0;sort(V.begin(),V.end(),greater<ll>());
    //for(ll i:V)cout<<i<<' ';cout<<'\n';
    for(ll i=0;i<V.size();++i)
    {
        ans+= V[i]*A[i];
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/