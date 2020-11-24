#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll u,v;
    for(ll i=0;i<N;++i)
    {
        cin>>u>>v;
    }
    if(N%2==0)cout<< N*(N+1)/2 + N - 2<<'\n';
    else cout<< N*(N+1)/2 + N - 3<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/