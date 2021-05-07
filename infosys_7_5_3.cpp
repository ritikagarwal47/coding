#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    ll s=0,A[N];for(ll i=0;i<N;++i)cin>>A[i],s+=A[i];
    if(s==0)
    {
        ll ans = N*(N+1)/2;
        cout<< ans%mod <<'\n';
        return;
    }  
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        if(A[i])ans+=(i+1);
        ans%=mod;
    }
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/