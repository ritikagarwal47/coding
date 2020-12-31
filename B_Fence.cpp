#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll mn=LONG_MAX,ans=1;
    ll s=0;
    for(ll i=0;i<K;++i)s+=A[i];
    mn = min(s,mn);
    for(ll i=K;i<N;++i)
    {
        s += A[i] - A[i-K];
        if(s<mn)
        {
            mn = s;
            ans = i - K + 2;
        }
    }
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/