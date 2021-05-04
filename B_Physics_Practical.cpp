#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[5000+3][5000+3];
ll fun(ll *A,ll l,ll r,ll N)
{
    if(l>r)return 0;
    if(2*A[l]>=A[r])return 0;
    if(dp[A[l]][A[r]]!=-1)return dp[A[l]][A[r]];

    ll a = upper_bound(A,A+N,A[l]) - A;
    ll b = lower_bound(A,A+N,A[r]) - A;

	return dp[A[l]][A[r]] = min(a - l + fun(A,a,r,N) ,r - b + 1 + fun(A,l,b-1,N) );
}
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    memset(dp,-1,sizeof(dp));
    sort(A,A+N);
    cout<<fun(A,0,N-1,N)<<'\n';
}
int main(void)
{
freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/