#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;ll s=0;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i],s+=A[i];
    if(N==1)
    {
        cout<<"1\n";return;
    }
    ll pre[N],suf[N];
    pre[0]=A[0];
    for(ll i=1;i<N;++i)pre[i] = __gcd(A[i],pre[i-1]);
    suf[N-1]=A[N-1];
    for(ll i=N-2;i>=0;--i)suf[i] = __gcd(A[i],suf[i+1]);
    //for(auto i:pre)cout<<i<<' ';cout<<'\n';
    //for(auto i:suf)cout<<i<<' ';cout<<'\n';
    ll ans=LLONG_MAX;
    for(ll i=0;i<N;++i)
    {
        if(i==0)
        {
            ans=min(ans,(s-A[i])/suf[i+1]);
        }
        else if(i==N-1)
        {
            ans=min(ans,(s-A[i])/pre[i-1]);
        }
        else 
        {
            ans=min(ans,(s-A[i])/(__gcd(pre[i-1],suf[i+1])));
        }
    }
    cout<<ans+1<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/