#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    //map<ll,ll> M;
    ll x;
    ll A[N+1]={0}; for(ll i=0;i<N;++i)cin>>x,++A[x];
    //vector<pair<ll,ll>> V;
    // for(auto i : M)
    // {
    //     V.push_back({i.second,i.first});
    // }
    sort(A,A+N+1);
    ll a = A[N];//V[V.size()-1].first;
    ll ans = a ;
    //--a;
    for(ll i=N-1;i>=0;--i)
    {
        
        a = min(a-1,A[i]);
        if(a<0)a=0;
        ans += a;
        //--a;
    }
    cout<<ans<<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/