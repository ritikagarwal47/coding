#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    map<ll,ll> M1,M2;
    for(ll i=0;i<N;++i)
    {
        ll x,y;cin>>x>>y;
        ++M1[x];++M2[y];
    }
    ll ans=0;
    for(auto i : M1)
    {
        ans  += M2[i.first]*i.second;
    }
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/