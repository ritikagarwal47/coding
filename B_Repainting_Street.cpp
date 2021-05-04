#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    map<ll,ll> M;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i],++M[A[i]];
    ll mx=0,a=0;
    vector<ll> V;
    for(auto i : M)
    {
        V.push_back(i.first);
    }
    ll ans=LONG_LONG_MAX;
    for(ll i=0;i<V.size();++i)
    {
    
    ll l=0;
    ll c=0;
    mx = V[i];
    while(l<N)
    {
        if(A[l]!=mx)++c,l+=K;
        else ++l;
    }
   // cout<< ans << ' ' <<c<< '\n';
    ans = min(ans,c);
    }
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/