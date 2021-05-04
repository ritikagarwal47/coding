#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,Q;cin>>N>>Q;
    ll A[N],pre[N],suff[N];
    map<ll,ll> M;

    for(ll i=0;i<N;++i)
    {
        cin>>A[i];
        M[A[i]]=LONG_MAX;
    }
    for(ll i=0;i<N;++i)
    {
        if(i==0)pre[i]=A[i];
        else
        {
            pre[i] = pre[i-1] + A[i];
        }
    }
    for(ll i=N-1;i>=0;--i)
    {
        if(i==N-1)suff[i]=A[i];
        else
        {
            suff[i] = suff[i+1] + A[i];
        }
    }
    //for(ll i=0;i<N;++i)cout<<pre[i]<<' ';cout<<'\n';
    //for(ll i=0;i<N;++i)cout<<suff[i]<<' ';cout<<'\n';
    for(ll i=0;i<N;++i)
    {
        M[A[i]] = min(M[A[i]],min(pre[i],suff[i]));
    }
    while(Q--)
    {
        ll x;cin>>x;
        cout<<M[x]<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/