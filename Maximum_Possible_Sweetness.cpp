#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int maxtn = 1e6;
struct Cmp
{
    bool operator()(const pair<ll, ll>& v1, const pair<ll, ll>& v2) const
    { 
        return (v1.second == v2.second ? v1.first < v2.first : v2.second < v1.second); 
    }
};
int main(void)
{
    int T;cin>>T;
    int tn=0;
    while(T--){
    ll N,D;cin>>N>>D;tn+=N;
    vector<pair<ll,ll>> V(N);
    for(ll i=0;i<N;++i)cin>>V[i].first;
    for(ll i=0;i<N;++i)cin>>V[i].second;
    sort(V.begin(),V.end());
    multiset<pair<ll,ll>,Cmp> M;
    ll ans=0;ll j=0;
    for(ll i=N-1;i>=0;--i)
    {
        while(j<i and (V[i].first + V[j].first)<=D)
        {
            M.insert(V[j]);
            ++j;
        }
        multiset<pair<ll,ll>> :: iterator it = M.find(V[i]); 
        if(j>i and it!=M.end())M.erase(it);
        if(V[i].first<=D)
        {
            if(M.size())
            {
                ans = max(ans,V[i].second + (*M.begin()).second);
                //cout<<V[i].second<<' '<<(*M.rbegin())<<' ';
            }
            else
            {
                ans = max(ans,V[i].second);
            }
        }
        //else break;
    }
    cout<<ans<<'\n';
    }
    assert(tn <= maxtn);
}/*Solved By:- Ritik Agarwal*/