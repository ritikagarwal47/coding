#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,X;cin>>N>>X;
    ll x,y;
    vector<pair<ll,ll>> V;
    for(ll i=0;i<N;++i)
    {
        cin>>x>>y;V.push_back({y,x});
    }  
    sort(V.begin(),V.end(),greater<pair<ll,ll>>());
    //reverse(V.begin(),V.end());
    for(auto i: V)
    {
        if(i.second<=X)
        {
            cout<<i.first<<'\n';return;
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/