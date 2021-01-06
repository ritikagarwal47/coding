#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    for(ll i=0;i<N;i+=2)
    {
        if(i!=N-1)swap(A[i],A[i+1]);
    }  
    for(ll i=0;i<N;++i)A[i] += A[i]%3;

   // for(ll i=0;i<N;++i)cout<<A[i]<<' ';
    ll x;cin>>x;
    ll l=-1,h=LONG_MAX;
    for(ll i=0;i<N;++i)
    {
        if(A[i]>l and A[i]<x)l=A[i];
        if(A[i]<h and A[i]>x)h=A[i];
    }
    cout<<l<<' ';
    if(h==LONG_MAX)cout<<"-1\n";
    else cout<<h<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/