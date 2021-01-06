#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
	ll s1=N-1;
	ll s2=1;
	for(ll i=0;i<N;++i)
	{
	    for(ll k=0;k<2;++k)
	    {
	       for(ll j=0;j<s1;++j)cout<<" ";
	       for(ll j=0;j<s2;++j)cout<<"*";
	       cout<<"\n";
	    }
	    s1=s1-1;
	    s2=s2+2;
	} 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/