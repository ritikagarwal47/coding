#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    //ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    vector<paair<ll,ll>> V(N);
    ll x,mx=0;
    for(ll i=0;i<N;++i)cin>>x,V[i].first=x;  
    for(ll i=0;i<N;++i)cin>>x,V[i].second=x,mx=max(mx,x);
    if(V[0].first>=N)
    {
        cout<< V[0].first* V[0].second <<'\n';return;
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/