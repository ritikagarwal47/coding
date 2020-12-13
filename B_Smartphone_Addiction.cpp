#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,M,T;cin>>N>>M>>T;
    ll A[M],B[M];
    vector<pair<ll,ll>> V(M);
    for(ll i=0;i<M;++i)cin>>V[i].first>>V[i].second;
    //sort(V.begin(),V.end());
    ll ans=N;
    ll l=0;// = V[0].first;
    for(ll i=0;i<M;++i)
    {
        ans -= (V[i].first - l) ;
        ans = max(ans,0LL) ;
        if(ans<=0)
        {
            cout<<"No";return;
        }
        ans+= (V[i].second - V[i].first) ;
        ans = min(ans,N);
        
        l = V[i].second;
    }
    ans -= (T - l + 1);
    if(ans<=0)cout<<"No";
    else cout<<"Yes";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/