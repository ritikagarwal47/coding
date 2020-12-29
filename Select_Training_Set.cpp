#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    map<string,pair<ll,ll>> M;
    string s;ll c;
    for(ll i=0;i<N;++i)
    {
        cin>>s>>c;
        if(c==0)M[s].first++;
        else M[s].second++;
    }
    ll ans=0;
    for(auto i :M)
    {
        ans += max(i.second.first,i.second.second);
    }
    cout<< ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/