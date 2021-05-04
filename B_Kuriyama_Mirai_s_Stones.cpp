#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll Q;cin>>Q;
    ll dp[N+1],B[N+1];
	for(ll i=1;i<=N;++i)dp[i]=dp[i-1]+A[i-1];
	sort(A,A+N);
	for(ll i=1;i<=N;++i)B[i]=B[i-1]+A[i-1];
	while(Q--)
	{
		ll a,b,c;cin>>a>>b>>c;
		if(a==1)cout<<dp[c]-dp[b-1]<<'\n';
		else cout<<B[c]-B[b-1]<<'\n';
	}
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/