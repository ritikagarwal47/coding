#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N+1];for(ll i=1;i<=N;++i)cin>>A[i];
	ll first[100000+5]={0},last[100000+5]={0};
    ll ans[100000+5]={0};
	for(ll i=1;i<=N;i++)
	{
		for(ll j=2;j*j<=A[i];j++)
		{
			if(A[i]%j==0)
			{
				if(!first[j])first[j]=i;
				last[j]=i;
				while(A[i]%j==0){A[i]/=j;}
			}
		}
	    if(A[i]!=1)
	    {
		    if(!first[A[i]])first[A[i]]=i;
		    last[A[i]]=i;
	    }
	}
	for (ll i=2;i<=100000;++i)
	{
		ans[first[i]]++;
		ans[last[i]]--;
	}   
	for (ll i=1;i<N;i++)
	{
		ans[i]+=ans[i-1];
		if (ans[i]==0)
		{
            cout<<i<<'\n';return;
		}
	}
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/