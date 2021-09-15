#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    vector<ll> V;
    ll ans=0;
    while(M--)
    {
        ll x;cin>>x;
        sort(V.begin(),V.end());
        ll p = lower_bound(V.begin(),V.end(),x) - V.begin();
        //if(V.size()==0)p=-1;
        ans+=p;
        //cout<<ans<<' '<<p<<'\n';
        V.push_back(x);
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/