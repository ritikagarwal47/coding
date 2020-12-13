#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll K,N;cin>>K>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll f=0,l=0;   
    for(ll i=0;i<N;++i)
    {
        if(A[i]==K)
        {
            f = i+1;
            break;
        }
    }
    for(ll i=N-1;i>=0;--i)
    {
        if(A[i]==K)
        {
            l = i + 1;
            break;
        }
    }
    if(f==l)cout<<"-1\n";
    else cout<<f<<' '<<l<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/