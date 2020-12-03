#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        ll j=i;
        ll mx=0;
        for(;j<i+K and j<N;++j)
        {
            mx = max(mx,A[j]);
        }
        i=j-1;
        ans+=mx;
    }
    cout<<ans<<'\n';
    for(ll i=0;i<N/K;++i)cout<<K<<' ';
    if(N%K!=0)cout<<N%K;
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/