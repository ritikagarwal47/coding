#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
//ll ans=LONG_MAX;
ll dp[2000+5][2000+5];
ll  fun(ll *A,ll i,ll j)
{
    //cout<<s<<'\n';
    //cout<<A[i]<<' '<<A[j]<<' '<<s<<'\n';
    if(i>j)
    {
        //cout<<s<<'\n';
        //ans=min(ans,s);
        return 0;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    //if(i==0)return dp[i][j] = fun(A,i,j+1,N,s + abs(A[i] - A[j+1]));
    //if(j==N-1)return dp[i][j] = fun(A,i-1,j,N,s + abs(A[i-1] - A[j]));
    return dp[i][j] = abs(A[i]-A[j]) + min(fun(A,i+1,j),fun(A,i,j-1));
}
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    sort(A,A+N);
    memset(dp,-1,sizeof(dp));
    //ll m = N/2;
    //cout<<A[m]<<'\n';
    ll p = fun(A,0,N-1);
    //if(p>0)fun(A,m-1,m-1,N,0);
    //if(p<N-1)fun(A,m+1,m+1,N,0);
    cout<<p<<'\n';
    //cout<<ans<<'\n'; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/