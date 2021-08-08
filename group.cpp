#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool  cmp(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    if(a.first==b.first)
    {
        return a.second>b.second;
    }
    return a.first>b.first;
}
void solve()
{
    ll N;cin>>N;
    map<ll,ll> M;
    for(ll i=0;i<N;++i)
    {
        ll x;cin>>x;
        M[x]++;
    }
    vector<pair<ll,ll>> V;
    for(auto i:M)
    {
        V.push_back({i.second,i.first});
    }
    sort(V.begin(),V.end(),cmp);
    for(auto i:V)
    {
        cout<<i.second<<' ';
    }
    cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}