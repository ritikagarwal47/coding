#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N+1]; for(ll i=1;i<=N;++i)cin>>A[i];
    ll ans[N];
    for(ll i=1;i<=N;++i)
    {
        ll c=1;
        ll a = A[i];
        while(i!=a)
        {
            a = A[a];
            ++c;
            //cout<<a<<' '<<A[a]<<' '<<i<<'\n';
        }
        ans[i-1]=c;
    }
    for(ll i=0;i<N;++i)cout<<ans[i]<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/