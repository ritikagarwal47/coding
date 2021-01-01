#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N+1]; for(ll i=0;i<N;++i)cin>>A[i];
    
    ll lmx[N+1]={0},lmn[N+1]={0},rmn[N+1]={0},rmx[N+1]={0};
    A[N]=rmx[N] = rmn[N] = lmx[N] = lmn[N] = 0;
    ll ans=LONG_MIN;//cout<< ans <<'\n';
    for(ll i=1;i<=N;++i)
    {
        lmn[i] = min(lmn[i-1] + A[i-1],A[i-1]);
        lmx[i] = max(lmx[i-1] + A[i-1],A[i-1]);
    }
    for(ll i=N-1;i>=0;--i)
    {
        rmn[i] = min(rmn[i+1] + A[i],A[i]);
        rmx[i] = max(rmx[i+1] + A[i],A[i]);
    }
    // for(ll i=0;i<=N;++i)cout<<A[i]<<' ';cout<<'\n';
    // for(ll i=0;i<=N;++i)cout<<lmn[i]<<' ';cout<<'\n';
    // for(ll i=0;i<=N;++i)cout<<rmn[i]<<' ';cout<<'\n';
    // for(ll i=0;i<=N;++i)cout<<lmx[i]<<' ';cout<<'\n';
    // for(ll i=0;i<=N;++i)cout<<rmx[i]<<' ';cout<<'\n';
    for(ll i=1;i<N;++i)
    {
        ans = max(ans,abs(lmx[i] - rmn[i]));
    }
    for(ll i=1;i<N;++i)
    {
        ans = max(ans,abs(rmx[i] - lmn[i]));
    }
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/