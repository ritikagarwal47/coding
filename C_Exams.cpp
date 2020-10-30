#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    vector<pair<ll,ll>> V;
    ll x,y;
    for(ll i=0;i<N;++i)
    {
        cin>>x>>y;
        V.push_back({x,y});
    }
    sort(V.begin(),V.end());
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        if(V[i].second>=ans)
        {
            ans = V[i].second;
        }
        else
        {
            ans = V[i].first;
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/