#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    vector<pair<ll,ll>> V;
    ll x=0;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        V.push_back({A[i],x});
    }
    sort(V.begin(),V.end());
    ll ans=0,c=0;
    for(ll i=N-1;i>=0;--i)
    {
        if(V[i].first<=(V[i].second+c))ans = max(ans,V[i].first);
        else
        {
            c+=V[i].second;
            ans = max(ans,c);
        }
        
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/