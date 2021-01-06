#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool check(map<ll,ll> M,map<ll,ll> M1)
{
    for(auto i : M)
    {
        if(i.second>M1[i.first])return false;
    }
    return true;
}
void solve()
{
    ll N,K;cin>>N>>K;
    map<ll,ll> M,M1;
    ll A[N]; 
    for(ll i=0;i<N;++i)
    {
        cin>>A[i];
        M[A[i]]=1;
    }
    ll ans=0;
    ll s=0;
    for(ll i=0;i<K;++i)
    {
        M1[A[i]]++;
        s +=A[i];
    }
    if(check(M,M1))
    {
        ans = max(ans,s);
    }
    for(ll i=K;i<N;++i)
    {
        --M1[A[i-K]];
        ++M1[A[i]];
        s -= A[i-K];
        s +=A[i];
        if(check(M,M1))
        {
            ans = max(ans,s);
        }        
    }
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/