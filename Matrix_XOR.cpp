#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M,K;cin>>N>>M>>K;
    // if(N==1 and M==1)cout<< (K+2) <<'\n';
    // else cout<< ((K + 2)^(N+M+K)) <<'\n';
    ll ans=0LL;
    ll a=2;
    for(ll i=0;i<N/2;++i)
    {
        ans ^= (a+K);//cout<<(a+K)<<'\n';
        ans ^= (K+a+M);//cout<<(K+a+M)<<'\n';
        a+=2;
    }
    if(N&1)
    {
        for(ll i=(a+K);i<(a+K+M);++i)
        {
            //cout<<i<<'\n';
            ans ^=i;
        }
    }
    cout<<ans<<'\n';;
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/