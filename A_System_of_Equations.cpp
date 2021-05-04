#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    set<pair<ll,ll>> st;
    ll n,m;cin>>n>>m;
    for(ll i=0;i*i<=n or i*i<=m;++i)
    {
        for(ll j=0;j*j<=n or j*j<=m;++j)
        {
            if((i*i + j )== n and (i + j*j)==m)st.insert({i,j});
        }
    }
    //for(auto i : st)cout<<i.first<<' '<<i.second<<'\n';
    cout<<st.size() <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/