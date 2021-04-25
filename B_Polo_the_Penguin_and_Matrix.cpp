#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M,K; cin>>N>>M>>K;
    ll A[N][M];
    for(ll i=0;i<N;++i)
        for(ll j=0;j<M;++j)
            cin>>A[i][j];
    ll ans=LONG_MAX;
    ll dp[10000+4];
    memset(dp,-1,sizeof(dp));
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            ll x = A[i][j],mn=0;
            if(dp[x]==-1)
            {
            for(ll k=0;k<N;++k)
            {
                for(ll l=0;l<M;++l)
                {
                    ll p = abs(x-A[k][l]);
                    if(p%K)
                    {
                        cout<<"-1\n";return;
                    }
                    mn+=p/K;
                }
            }            
            //cout<<x<<' '<<mn<<'\n';
            dp[x] = mn;
            // }
            // else
            // {
            //     mn = dp[x];
            // }
            ans=min(ans,mn);
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