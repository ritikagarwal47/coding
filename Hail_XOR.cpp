#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void fun(ll *A,ll X,vector<ll> V,vector<ll> C)
{
    for(ll i=0;i<1;++i)
    {
        for(ll j=30;j>=0;--j)
        {
            if((A[i]&(1LL<<j)))
            {
                A[i] ^=(1LL<<j);
                ll d ;
                //if((++C[j]) < V[j].size())d = V[j][C[j]++];
                //else d = 2 - 1;
                A[d] ^=(1LL<<j);
                if(--X==0)break;
            }
        }
        if(X==0)break;
    }
    if(X&1)A[2-1] ^= (1LL<<0LL),A[2-2] ^= (1LL<<0LL);
    for(ll i=0;i<2;++i)cout<<A[i]<<' ';cout<<'\n';
}
void solve()
{
    ll N,X;cin>>N>>X;
    ll A[N];
    vector<ll> mask[31];
    for(ll i=0;i<N;++i)
    {
        cin>>A[i];
        if(i==N-1)break;
        for(ll j=30;j>=0;--j)
        {
            if(A[i]&(1LL<<j))mask[j].push_back(i);
        }
    }
    vector<ll> dp(31);
    if(N==2)
    {
        for(ll i=0;i<1;++i)
        {
        for(ll j=30;j>=0;--j)
        {
            if((A[i]&(1LL<<j)))
            {
                ll idx;A[i] ^=(1LL<<j);
                if((++dp[j]) < mask[j].size())idx = mask[j][dp[j]++];
                else idx = 2 - 1;
                A[idx] ^=(1LL<<j);--X;
                if(X==0)break;
            }
        }
        if(X==0)break;
    }
    if(X&1)A[2-1] ^= (1LL<<0LL),A[2-2] ^= (1LL<<0LL);
    for(ll i=0;i<2;++i)cout<<A[i]<<' ';cout<<'\n';
    return;
    }
    for(ll i=0;i<N-1;++i)
    {
        for(ll j=30;j>=0;--j)
        {
            if((A[i]&(1LL<<j)))
            {
                ll idx;A[i] ^=(1LL<<j);
                if((++dp[j]) < mask[j].size())idx = mask[j][dp[j]++];
                else idx = N - 1;
                A[idx] ^=(1LL<<j);--X;
                if(X==0)break;
            }
        }
        if(X==0)break;
    }
    for(ll i=0;i<N;++i)cout<<A[i]<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/