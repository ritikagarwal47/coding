#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    K = abs(K);
    ll a=0,b=0,ans=0;
    for(ll i=K+2;i<=(2*N);++i)
    {
        if(i > N + 1)a = N - (i - N) + 1;
        else a = i - 1;
        if(i - K > N + 1) b = N - (i - K - N) + 1;
        else b = i - K - 1;
        ans += a * b;
    }
    cout<< ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/