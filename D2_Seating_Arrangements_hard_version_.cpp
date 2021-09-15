#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
// ll fun(vector<ll> &V)
// {

// }
void solve()
{
    ll N,M;cin>>N>>M;
    vector<pair<ll,ll>> V;
    for(ll i=0;i<N*M;++i)
    {
        ll x;cin>>x;
        V.push_back({x,i});
    }
    sort(V.begin(),V.end());
    for(ll i=0;i<N*M;++i)
    {
        V[i].second *=(-1);
    }
    ll ans=0;ll a=0;
    for(ll i=0;i<N;++i)
    {
        // vector<ll> B;
        // for(ll j=0;j<M;++j)
        // {
        //     ll x = V[a++];
        // }
        vector<ll> A;
        sort(V.begin() + (M * i), V.begin() + (M * i + M));
        // for(ll j=0;j<M;++j)
        // {
        //     ll x = V[a++].first;
        //     sort(A.begin(),A.end());
        //     ll p = lower_bound(A.begin(),A.end(),x) - A.begin();
        //     ans+=p;
        //     //cout<<ans<<' '<<p<<' '<<V[a-1]<<'\n';
        //     A.push_back(x);
        // }
        for (ll j = 0; j <M;++j) 
        {
            for (ll k = 0; k < j;++k)
            {
                if (V[i*M + k].second > V[i*M + j].second)++ans;
            }
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/