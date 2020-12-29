#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void build(ll *seg,ll *A,ll i,ll l,ll r)
{
    if(l>r)return;
    if(l==r)
    {
        seg[i] = A[l]%mod;return;
    }
    ll m = (l+r)/2;
    build(seg,A,2*i + 1,l,m);
    build(seg,A,2*i + 2,m+1,r);
    seg[i] = min(seg[2*i+1],seg[2*i+2])%mod;
    //return seg[i] = min(left,right)%mod;
}
ll range_min(ll *seg,ll *lazy,ll l,ll r,ll s,ll e,ll i)
{
    lazy[i]%=mod;
    if(lazy[i]!=0)
    {
        seg[i] += lazy[i]%mod;
        seg[i]%=mod;
        if(s!=e)
        {
            lazy[2*i+1] += lazy[i]%mod;
            lazy[2*i+1]%=mod;
            lazy[2*i+2] += lazy[i]%mod;
            lazy[2*i+2]%=mod;
        }
        lazy[i] = 0;
    }
    if(s>r or l>e or s>e)return LONG_MAX;
    if(s>=l and e<=r)return seg[i]%mod;
    ll m = (s+e)/2;
    ll left = range_min(seg,lazy,l,r,s,m,2*i + 1);
    ll right = range_min(seg,lazy,l,r,m+1,e,2*i + 2);
    return min(left,right)%mod;
}

void range_update(ll *seg,ll *lazy,ll l,ll r,ll s,ll e,ll i,ll val)
{
    if(lazy[i]!=0)
    {
        seg[i] += lazy[i]%mod;
        seg[i]%=mod;
        if(s!=e)
        {
            lazy[2*i+1] += lazy[i]%mod;
            lazy[2*i+1]%=mod;
            lazy[2*i+2] += lazy[i]%mod;
            lazy[2*i+2]%=mod;
        }
        lazy[i] = 0;
    }
    if(s>r or e<l or s>e)return;
    if(s>=l and e<=r)
    {
        seg[i] +=val;
        seg[i]%=mod;
        if(s!=e)
        {
            lazy[2*i+1] +=val;
            lazy[2*i+1]%=mod;
            lazy[2*i+2] +=val;
            lazy[2*i+2]%=mod;
        }
        return ;
    }
    ll m = (s+e)/2;
    range_update(seg,lazy,l,r,s,m,2*i + 1,val);
    range_update(seg,lazy,l,r,m+1,e,2*i + 2,val);
    seg[i] = min(seg[2*i+1],seg[2*i+2]); 
}
void solve()
{
    ll N,Q;cin>>N>>Q;
    ll A[N];for(ll i=0;i<N;++i)A[i]=1;
    ll seg[4*N+1]={0};
    ll lazy[4*N+1]={0};
    build(seg,A,0,0,N-1);
    ll l,r;
    while(Q--)
    {
        cin>>l>>r;
        ll mn = range_min(seg,lazy,l,r,0,N-1,0);
        //cout<< mn <<'\n';
        range_update(seg,lazy,l,r,0,N-1,0,mn%mod);
        //for(ll i=0;i<4*N;++i)cout<< seg[i]<<' ';cout<<'\n';
        //for(ll i=0;i<4*N;++i)cout<< lazy[i]<<' ';cout<<'\n';
    }
    ll ans = range_min(seg,lazy,0,N-1,0,N-1,0);
    //for(ll i=0;i<4*N;++i)cout<< seg[i]<<' ';cout<<'\n';
    //for(ll i=0;i<4*N;++i)cout<< lazy[i]<<' ';cout<<'\n';
    ans%=mod;
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/