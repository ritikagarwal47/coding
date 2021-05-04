#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll x=1,y=1;
void fun(ll M)
{
    cout<<x<<' '<<y<<' ';
	if(x&1)
	{
		if(y==M)++x;
		else ++y;
	}
    else
	{
		if(y==1)++x;
		else --y;
	}
}
void solve()
{
    ll N,M,K;cin>>N>>M>>K;
    for(ll i=1;i<K;++i)
    {
        cout<<"2 ";
        fun(M);fun(M);
        cout<<'\n';
    }  
    K = N*M - (K-1)*2;
    cout<<K<<' ';
    for(ll i=1;i<=K;++i)fun(M);

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/