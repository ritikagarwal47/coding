#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,Q;cin>>N>>Q;
    ll A[N+1]; for(ll i=1;i<=N;++i)cin>>A[i];
    ll ans=N;
    for(ll i=1;i<N;++i)
    {
        if(A[i]==A[i+1])--ans;
    }
    ll x,y;
    while (Q--)
    {
        cin>>x>>y;
        if(x>1 and A[x-1]==A[x])++ans;
        if(x<N and A[x]==A[x+1])++ans;
        A[x]=y;
        if(x>1 and A[x-1]==A[x])--ans;
        if(x<N and A[x]==A[x+1])--ans;
        cout<<ans<<'\n';
    }
    
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/