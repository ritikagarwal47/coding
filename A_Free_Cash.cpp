#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    map<ll,ll> M;
    for(ll i=0;i<N;++i)
    {
        ll x,y;cin>>x>>y;
        M[x*60 + y]++;
    }
    ll mx=0;
    for(auto i : M)
    {
        mx=max(mx,i.second);
    }
    cout<< mx <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/