#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll A[100000+1];
ll N;
ll q[1005];
ll s;
ll query(ll l,ll r)
{
    ll mn=LONG_MAX;
    ll st = l/s;
    ll e = r/s;
    if(st==e)
    {
        for(ll i=l;i<=r;++i)mn = min(mn,A[i]);
        return mn;
    }
    st++;
    for(ll i=l;i<=st*s;++i)mn = min(mn,A[i]);
    for(ll i=e*s;i<=r;++i)mn = min(mn,A[i]);
    for(ll i=st;i<e;++i)mn = min(mn,q[i]);
    return mn;
}
void build()
{
    s = ceil(sqrt(N));
    for(ll i=0;i<=s;++i)q[i]=INT_MAX;

    for(ll i=0;i<N;++i)
    {
        q[i/s] = min(q[i/s],A[i]);
    }
    //for(ll i=0;i<=s;++i)cout<<q[i]<<' ';cout<<'\n';
}
void solve()
{
    cin>>N;
    for(ll i=0;i<N;++i)cin>>A[i];
    build();
    ll Q;cin>>Q;
    while(Q--)
    {
        ll l,r;cin>>l>>r;
        if(l==r)cout<<A[l]<<'\n';
        else cout<< query(l,r)<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/