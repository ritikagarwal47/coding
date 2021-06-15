#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    map<vector<ll>,pair<ll,ll>> M;
    for(ll i=0;i<N;++i)
    {
        vector<ll> V;ll s=0;
        for(ll j=i;j<N;++j)
        {
            V.push_back(A[j]);s+=A[j];
            ll p = M[V].second;
            pair<ll,ll> a=make_pair(s,p+1);
            M[V]=a;//cout<<a.first<<' '<<a.second<<'\n';
        }
    } 
    ll ans=LLONG_MIN;
    for(auto i:M)
    {
        ll s = i.second.first;
        ll p = i.second.second;
        //for(auto j:i.first)s+=j;

        ans = max(ans,s*p);
        //cout<<ans<<' '<<i.first<<' '<<i.second<<'\n';
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/