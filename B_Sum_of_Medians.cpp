#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N*K]; for(ll i=0;i<N*K;++i)cin>>A[i];
    ll c;
    if(N%2==0)c = N/2+1;
    else c = N/2+1;
    ll i=N*K;
    ll s=0;
    for(ll j=0;j<K;++j)
    {
        i-=c;
        s+= A[i];
        //cout<<A[i]<<' ';
    }
    cout<< s<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/