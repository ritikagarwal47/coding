#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[500+2][500+2][20+1],A[500+2][500+2],B[500+2][500+2];
ll N,M,K;
ll fun(ll i,ll j,ll K)//,ll curr)
{
    if(K==0)return 0;//curr;
    if(i>=N or i<0 or j>=M or j<0)return LONG_MAX;
    if(dp[i][j][K]!=-1)return dp[i][j][K];
    ll ans=LONG_MAX;
	if(i!=N-1)ans=min(ans,B[i][j] + fun(i+1,j,K-1));
	
	if(i!=0)ans=min(ans,B[i-1][j] + fun(i-1,j,K-1));
	
	if(j!=M-1)ans=min(ans,A[i][j] + fun(i,j+1,K-1));
	
	if(j!=0)ans=min(ans,A[i][j-1] + fun(i,j-1,K-1));
	//cout<<ans<<' ';
	return dp[i][j][K]=ans;
}
void solve()
{
    cin>>N>>M>>K;
    memset(dp,-1,sizeof(dp));
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M-1;++j)cin>>A[i][j];
    }
    for(ll i=0;i<N-1;++i)
    {
        for(ll j=0;j<M;++j)cin>>B[i][j];
    }
    if(K&1)
    {
        for(ll i=0;i<N;++i)
        {
            for(ll j=0;j<M;++j)cout<<"-1 ";cout<<'\n';
        }
        return;
    }
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            cout<<2*fun(i,j,K/2)<<' ';
        }
        cout<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/