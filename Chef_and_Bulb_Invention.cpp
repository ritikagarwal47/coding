#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void brute()
{
    ll N,p,K;cin>>N>>p>>K;
    ll ans=0;
    for(ll i=0;i<K;++i)
    {
        ll a = i;
        for(;a<N;a+=K)
        {
            ++ans;
            if(a==p)
            {
                cout<<ans<<'\n';
            }
        }
    } 
}
void solve()
{
    //brute();return;
    ll N,p,K;cin>>N>>p>>K;--N;
    ll ans=0;
    ll n = N%K;
    ll m = p%K;
    if(n<=m)//m==0)
    {
        //ans = N/p;
        ll a = (N/K) + 1;
        ll b = N - n;
        ans = n*a + (m - n)*(a-1) + (p/K + 1);
       // cout<<a<<' '<<b<<' ';
    } 
    else
    {
        ll a = (N/K) + 1;
        ll b = N - a*K;
        ans = m*(a) + (p/K) + 1;//min(m,b) + (N+m)/K;
       // cout<<a<<' '<<b<<' ';
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/