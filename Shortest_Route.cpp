#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,Q;cin>>N>>Q;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll dp[N];dp[0]=0;
    for(ll i=1;i<N;++i)
    {
        if(A[i])dp[i]=1;
        else dp[i]=mod;
    }
    //for(auto i:dp)cout<<i<<' ';cout<<'\n';
    ll last=0;bool ok=false;
    for(ll i=N-1;i>=0;--i)
    {
        if(A[i]==2)last=i,ok=true;
        if(ok)dp[i] = min(dp[i],(last-i));// + 1);
    }
    //for(auto i:dp)cout<<i<<' ';cout<<'\n';
    last=0;ok=false;
    for(ll i=0;i<N;++i)
    {
        if(A[i]&1)last=i,ok=true;
        if(ok)dp[i] = min(dp[i],(i-last));// + 1);
    }
    //for(auto i:dp)cout<<i<<' ';cout<<'\n';
    while(Q--)
    {
        ll x;cin>>x;
        if(dp[x-1]==mod)cout<<"-1 ";
        else cout<<dp[x-1]<<' ';
    }
    cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/