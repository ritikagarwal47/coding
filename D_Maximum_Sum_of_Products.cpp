#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll N;
ll A[5000+3],B[5000+3];
ll dp[5000+3][5000+3];
ll ans=0;
ll fun(ll l,ll r)
{
    if(l>=r)return 0;
    if(dp[l][r]!=-1)return dp[l][r];
    return dp[l][r] = A[r]*B[l] + A[l]*B[r] - A[l]*B[l] - A[r]*B[r] + fun(l+1,r-1); 
}
void solve()
{
    cin>>N;
    for(ll i=0;i<N;++i)cin>>A[i]; 
    for(ll i=0;i<N;++i)cin>>B[i];
    for(ll i=0;i<N;++i)
    {
        ans+= A[i]*B[i];
    }
    ll p=ans;
    memset(dp,-1,sizeof(dp));
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<=i;++j)
        {
            ans = max(ans,p + fun(j,i));
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