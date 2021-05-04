#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=998244353;
// I'm in Love with Experience ^_^
void solve()
{
    ll a,b,c;cin>>a>>b>>c;
    ll ans=0;

    // for(ll i=1;i<=a;++i)
    // {
    //     for(ll j=1;j<=b;++j)
    //     {
    //         ans = (ans%mod + (((i*j)%mod)*(c*(c-1)/2)%mod)%mod )%mod;
    //     }
    // }
    cout<< ((((a*(a+1)/2)%mod) * ((b*(b+1)/2)%mod)%mod) * ((c*(c+1)/2)%mod))%mod <<'\n';
    //cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/