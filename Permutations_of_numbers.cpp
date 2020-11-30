#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool cmp(pair<ll,ll> a,pair<ll,ll> b)
{
    ll x = a.first - a.second;
    ll y = b.first - b.second;
    if(x>0 and y>0)
    {
        if(x>y)return true;
        return false;
    }
    if(x>y)return true;
    if(x<0 and y<0 and abs(x)<abs(y))return true;
    return false;
}
void solve()
{
    ll N;cin>>N;
    vector<pair<ll,ll>> V(N);
    ll x;
    for(ll i=0;i<N;++i)cin>>x,V[i].first = x;
    for(ll i=0;i<N;++i)cin>>x,V[i].second =  x;
    //sort(B,B+N);sort(A,A+N,greater<ll>());
    sort(V.begin(),V.end(),cmp);
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        ans += (V[i].first*i + V[i].second*(N-i-1));
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/