#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll dp[K+1];
    for(ll i=0;i<=K;++i)dp[i]=0;
    for(ll i=1;i<=K;++i)
    {
        for(ll j=0;j<N;++j)
        {
            if(A[j]<=i)dp[i]+= dp[i-A[j]];
            if(A[j]==i)dp[i]+=1;
        }
        dp[i]%=mod;
    }
    //for(auto i:dp)cout<<i<<' ';cout<<'\n';
    cout<< dp[K]<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/