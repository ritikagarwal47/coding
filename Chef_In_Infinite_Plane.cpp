#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    map<ll,ll> M;
    ll N;cin>>N;
    for(ll i=0;i<N;++i)
    {
        ll x;cin>>x;++M[x];
    }
    set<pair<ll,ll>> st;
    for(auto i:M)
    {
        ll a = i.first;
        ll b = i.second;
        ll p=1;
        for(ll j=0;j<b;++j)
        {
            st.insert({p,a-p});
            ++p;
            if(p==a)break;
        }
    }
    cout<< st.size()<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/