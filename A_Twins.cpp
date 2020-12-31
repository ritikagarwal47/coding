#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
	ll N;cin>>N;
    ll sum=0;
	ll A[N];for(ll i=0;i<N;++i)cin>>A[i],sum+=A[i];
	
	sort(A,A+N);
	ll cnt = 0;
	ll sum1 = 0;
	for(ll i=N-1;i>=0;i--)
	{
		sum1+=A[i];
		cnt++;
		if(2*sum1>sum)break;
	}
	
	cout<<cnt;
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/