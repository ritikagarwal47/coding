#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll A;cin>>A;
    ll x;vector<ll> V;
    while(cin>>x)V.push_back(x);
    ll N = V.size();
    //cout<<V.size()<<'\n';
    map<ll,ll> M;
    for(ll i=0;i<N;++i)++M[V[i]];
    vector<pair<ll,ll>> B;
    for(auto i : M)
    {
        B.push_back({i.second,i.first});
    }
    sort(B.begin(),B.end());
    ll ans=0;
    for(ll i=0;i<B.size()-A+1;++i)
    {
        ll p = B[i].first;
        //cout<<B[i].second<<' '<<p<<'\n';
        bool ok=true;
        for(ll j=i+1;j<i+A;++j)
        {
            if(B[j].first!=p)
            {
                ok=false;break;
            }
        }
        if(ok)ans=max(ans,p);
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/