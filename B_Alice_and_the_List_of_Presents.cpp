#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll power(ll a, ll n)
{
	ll res = 1;
	while(n)
	{
		if(n & 1)
		res = (res * a) % mod;
	    n /= 2;
		a = (a * a) % mod;
	}	
	return res;
}
void solve()
{
    ll N,M;cin>>N>>M;
	ll p = ( (ll)power(2,M) - 1 + mod) % mod;
	cout<< power(p,N); 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/