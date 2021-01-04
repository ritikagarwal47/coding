#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M,avg;cin>>N>>M>>avg;
    vector<pair<ll,ll>> V;
    ll r=avg*N;
    for(ll i=0;i<N;++i)
    {
        ll x,y;cin>>x>>y;
        V.push_back({y,x});
        r-=x;
    }
    sort(V.begin(),V.end());
    ll ans=0,a=0;
    while(r>0)
    {
        ll x = min(r,M-V[a].second);
        ans += x*V[a].first;
        ++a;
        r-=x;
    }
    cout<< ans <<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/