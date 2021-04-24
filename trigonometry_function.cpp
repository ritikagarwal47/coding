#include<bits/stdc++.h>
#define ll long long int
#define N 1000000
using namespace std;
const int mod=1e9+21;
const long double tn = 0.71;//2894601845445;//40.89339465;//40.9;//atan(sqrt(3)/2);
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[N+2];
void pre()
{
    //cout<<tn<<'\n';
    for(ll i=0;i<=N;++i)
    {
        dp[i] = ( ((ll) (2 * pow(7,i/2.0) * cos(i*tn)) )%mod + ( (ll)(i*pow(4,i)) )%mod)%mod;
    }
    //cout<<pow(7,1/2.0)<<'\n';
    //cout<<dp[0]<<' '<<dp[1]<<'\n';
}
void solve()
{
    ll p,q;cin>>p>>q;
    ll ans=0;
    for(ll i=p;i<=q;++i)
    {
        ans += dp[i];
        ans%=mod;
    }  
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/