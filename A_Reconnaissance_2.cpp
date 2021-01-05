#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    vector<pair<ll,ll>> V(N+1);
    for(ll i=0;i<N;++i)cin>>V[i].first,V[i].second=i;
    V[N].first=V[0].first;
    V[N].second=0;
    //sort(V.begin(),V.end());
    ll mx = LONG_MAX,a=0,b=0;
    for(ll i=0;i<N;++i)
    {
        if(abs(V[i].first - V[i+1].first)<mx)
        {
            mx = abs(V[i].first - V[i+1].first);
            a=V[i].second+1;
            b=V[i+1].second+1;
        }
    }
    cout<<a<<' '<<b<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/