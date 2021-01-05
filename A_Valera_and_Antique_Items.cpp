#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    vector<ll> ans;
    for(ll i=0;i<N;++i)
    {
        ll Q;cin>>Q;bool ok=false;
        for(ll j=0;j<Q;++j)
        {
            ll x;cin>>x;
            if(x<M)ok=true;
        }
        if(ok)ans.push_back(i+1);
    }
    cout<<ans.size()<<'\n';
    for(auto i : ans)cout<< i <<' ';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/