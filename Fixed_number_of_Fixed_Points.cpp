#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    if(K==N-1)cout<<"-1\n";
    else
    {
        for(ll i=1;i<=K;++i)cout<<i<<' ';
        for(ll i=K+2;i<=N;++i)cout<<i<<' ';
        if((K+1)<=N)cout<<K+1<<' ';
        cout<<'\n';
    } 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/