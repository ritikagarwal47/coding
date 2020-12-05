#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll a=0,b=0;
    ll p=0;
    for(ll i=0;i<N;++i)
    {
        if(A[i]<=K)++a;
        else break;
        ++p;
    }
    for(ll i=N-1;i>=p;--i)
    {
        if(A[i]<=K)++b;
        else break;
    }
    cout<< a + b  <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/