#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,M;cin>>N>>M;
    ll mn=0,x,mx=0;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        mx +=x;
        mn += (x+M-1)/M;
    }
    cout<<(mx+M-1)/M<<' '<<mn<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/