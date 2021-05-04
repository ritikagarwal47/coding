#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll x,y;vector<pair<ll,ll> > V;
    for(ll i=0;i<N;++i)
    {
        cin>>x>>y;
        V.push_back({x,y});
    } 
    sort(V.begin(),V.end());
    ll ans=0,z=0,o=0;x=0;
    for(ll i=0;i<V.size();++i)
    {
        if(x==V[i].first)
        {
            if(V[i].second)++o;
            else ++z;
        }
        else
        {
            if(o>=z)ans+= x*o;
            else ans-= x*z;
            x=V[i].first;
            if(V[i].second)o=1,z=0;
            else z=1,o=0;
        }
        //cout<<ans<<'\n';
    }
    if(o>=z)ans+= x*o;
    else ans-= x*z;
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/