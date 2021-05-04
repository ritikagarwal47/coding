#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    ll ans=1;
    if(N==1)
    {
        cout<<"1\n";return;
    } 
    ll p = pow(2,K) ;
    //cout<<p<<' ';
    N%=mod;
    for(ll i=1;i<=K;++i)
    {
        ans = (ans*N)%mod;
    }
    //cout<<(p%mod)<<'\n';
    //cout<< 226732710 - ans  <<'\n';
    cout<< ans <<'\n';
    //cout<< ans%mod <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/