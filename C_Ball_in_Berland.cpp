#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll p,q,N;cin>>p>>q>>N;
    map<ll,ll> M1,M2;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll B[N];for(ll j=0;j<N;++j)cin>>B[j];
    set<pair<ll,ll>> st;
    for(ll i=0;i<N;++i)
    {
        st.insert({A[i],B[i]});
    } 
    vector<pair<ll,ll>> V;
    for(auto i : st)
    {
        V.push_back(i);
    }
    ll ans=0;//cout<<ans<<'\n';
    ll a=0;
    for(ll i=V.size()-1;i>=0;--i)
    {
        //cout<<ans<<'\n';
        ans+= a - (M1[V[i].first] + M2[V[i].second]); 
        M1[V[i].first]++;
        M2[V[i].second]++;
        ++a;
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/