#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll x=0;
    map<ll,ll> M;
    for(ll i=0;i<N;++i)
    {
        cin>>x;++M[x];
    }
    ll ans=0;
    ll dp[100000+5];
    dp[0]=0,dp[1]=M[1];
    for(ll i=2;i<=100000;++i)
    {
        dp[i] = max(dp[i-1],dp[i-2] + M[i]*i);
    }
    cout<< dp[100000]<<'\n';
        // if(M[i]==0)continue;
        // else
        // {
        //     // ll a = M[i]*i ;
        //     // ll b = M[i-1]*(i-1) ;
        //     // ll c = M[i-2]*(i-2) ;

        // }
            // if(M[i+1]!=0 and M[i+2]!=0)
            // {
            //     ans += max(M[i]*i - i,max(M[i+1]*(i+1) - (i+1),M[i+1]*(i+2) - (i+2)));
            // }
            // else if(M[i+1]!=0)
            // {
            //     ans += max(M[i]*i - i,M[i+1]*(i+1) - (i+1));
            // }
            // else if(M[i+2]!=0)
            // {
            //     ans += max(M[i]*i - i,M[i+2]*(i+2) - (i+2));
            // }
            // else
            // {
                
            // }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/