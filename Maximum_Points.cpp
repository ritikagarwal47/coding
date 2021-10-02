#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a,b,c;cin>>a>>b>>c;
    ll x,y,z;cin>>x>>y>>z;
    ll W=240;
    vector<ll> w,p;
    ll N = 60;
    for(ll i=0;i<N;++i)
    {
        if(i<20)
        {
            w.push_back(a);
            p.push_back(x);
        }
        else if(i<40)
        {
            w.push_back(b);
            p.push_back(y);
        }
        else
        {
            w.push_back(c);
            p.push_back(z);
        }
    }
    ll dp[N+1][W+1];

    for(ll i=0;i<=N;++i)
    {
        for(ll j=0;j<=W;++j)
        {
            if(i==0 or j==0)
            {
                dp[i][j]=0;
                continue;
            }

            if(j>=w[i-1])dp[i][j] = max(p[i-1] + dp[i-1][j - w[i-1]],dp[i-1][j] );
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout<<dp[N][W] <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/