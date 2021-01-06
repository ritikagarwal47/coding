#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll feq[150000+5]={0};
    ll x;
    for(ll i=0;i<N;++i)cin>>x,feq[x]++;
    ll ans=0;
    for(ll i=1;i<=150001;++i)
    {
        if(feq[i-1]>0)--feq[i-1],ans++;
        else if(feq[i]>0)--feq[i],ans++;
        else if(feq[i+1]>0)--feq[i+1],ans++;
    }
    cout<< ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/