#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N+1];
    for(ll i=1;i<=N;++i)A[i]=i;
    for(ll i=1;i<=N;++i)
    {
        //if(K==0)break;
        if(i&1 and K>0)--K;
        else A[i] = -i;
    }
    for(ll i=N;i>=0;--i)
    {
        //if(K==0)break;
        if(i%2==0 and K>0)A[i]=i,--K;
    }
    for(ll i=1;i<=N;++i)cout<<A[i]<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/