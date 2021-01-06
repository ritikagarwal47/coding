#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N][N];
    for(ll i=0;i<N;++i)for(ll j=0;j<N;++j)cin>>A[i][j];
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<N;++j)
        {
            for(ll k=0;k<N;++k)
            {
                if((A[i][j]+A[j][k])<=K)++ans;
            }
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/