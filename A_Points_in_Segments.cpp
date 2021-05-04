#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    map<ll,ll> mp;vector<ll> V;
    while(N--)
    {
        ll a,b;cin>>a>>b;
        for(ll i=a;i<=b;++i)++mp[i];
    }
    for(ll i=1;i<=M;++i)
    {
        if(mp[i]==0)V.push_back(i);
    }
    cout<<V.size()<<'\n';
    for(auto i:V)cout<<i<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/