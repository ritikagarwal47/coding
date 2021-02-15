#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    map<pair<ll,ll>,ll> M1;
    ll N,Q,M;cin>>N>>Q>>M;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll dp[1000000+5]={};
    for(ll i=0;i<Q;++i)
    {
        ll a,b;cin>>a>>b;--a;--b;
        if(A[a]>M)continue;
        else if(A[a]<=M and A[b]>M)
        {
            dp[A[a]]++;dp[M+1]--;
        }
        else
        {
            dp[A[a]]++;dp[M+1]--;M1[make_pair(A[a],A[b])]++;
        }
    }
    for(auto i : M1)
    {
        ll a = i.first.first;
        ll b = i.first.second;
        ll c = i.second;
        dp[a+b]-=c;
        ll p = 2*a + b;
        dp[p]+=c;
        while((b+p)<=M)
        {
            p+=b;
            dp[p]-=c;
            dp[a+p]+=c;
            p+=a;
        }        
    }
    ll ans=0;
    for(ll i=1;i<=M;++i)
    {
        dp[i] += dp[i-1];
        ans =  max(ans,dp[i]);
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}