#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
int main()
{
    ll N;cin>>N;
    ll dp[N]={0};
    ll Q;cin>>Q;
    while(Q--)
    {
        ll x,y;cin>>x>>y;--x;--y;
        ll j=1;
        for(ll i=x;i<=y;++i)
        {
            dp[i]+=j;++j;
        }
    }
    for(auto i:dp)cout<<i<<' ';cout<<'\n';
}